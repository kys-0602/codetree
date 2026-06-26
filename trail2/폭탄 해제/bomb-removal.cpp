#include <iostream>

class Bomb {
public:
    std::string code;
    char color;
    int second;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Bomb bomb;
    std::cin >> bomb.code >> bomb.color;
    std::getchar();
    std::cin >> bomb.second;

    std::cout << "code : " << bomb.code << '\n';
    std::cout << "color : " << bomb.color << '\n';
    std::cout << "second : " << bomb.second;

    return 0;
}