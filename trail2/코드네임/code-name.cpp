#include <algorithm>
#include <iostream>

class A {
public:
    char codename;
    int score;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    A as[5];
    for (int i = 0; i < 5; ++i) {
        std::cin >> as[i].codename;
        std::getchar();
        std::cin >> as[i].score;
    }
    std::sort(as, as + 5, [&](const auto& a1, const auto& a2) {
        return a1.score < a2.score;
    });

    std::cout << as[0].codename << ' ' << as[0].score;

    return 0;
}