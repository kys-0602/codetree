#include <algorithm>
#include <iostream>
#include <vector>

class Weather {
public:
    int year;
    int month;
    int day;
    std::string dayOfTheWeek;
    std::string weather;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<Weather> weathers(n);
    for (int i = 0; i < n; ++i) {
        char dash1, dash2;
        std::cin >> weathers[i].year >> dash1 >> weathers[i].month >> dash2 >> weathers[i].day;
        std::cin >> weathers[i].dayOfTheWeek;
        std::cin >> weathers[i].weather;
    }

    std::sort(weathers.begin(), weathers.end(), [&](const auto& w1, const auto& w2) {
        // return w1.year <= w2.year && w1.month <= w2.month && w1.day <= w2.day;
        return std::tie(w1.year, w1.month, w1.day) < std::tie(w2.year, w2.month, w2.day);
    });

    for (const auto& weather : weathers) {
        if (weather.weather == "Rain") {
            std::cout << weather.year << '-';

            if (weather.month < 10) {
                std::cout << '0' << weather.month << '-';
            } else {
                std::cout << weather.month << '-';
            }

            if (weather.day < 10) {
                std::cout << '0' << weather.day << ' ';
            } else {
                std::cout << weather.day << ' ';
            }

            std::cout << weather.dayOfTheWeek << ' ';
            std::cout << weather.weather;

            break;
        }
    }

    return 0;
}