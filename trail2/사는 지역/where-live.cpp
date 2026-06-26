#include <algorithm>
#include <iostream>
#include <vector>

class Person {
public:
    std::string name;
    std::string addr;
    std::string city;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    
    std::vector<Person> people(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> people[i].name >> people[i].addr >> people[i].city;
    }

    std::sort(people.begin(), people.end(), [&](const auto& p1, const auto& p2) {
        return p1.name < p2.name;
    });

    std::cout << "name " << people[n - 1].name << '\n';
    std::cout << "addr " << people[n - 1].addr << '\n';
    std::cout << "city " << people[n - 1].city;

    return 0;
}