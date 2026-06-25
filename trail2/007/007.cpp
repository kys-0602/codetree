#include <iostream>

class TopSecret {
public:
    std::string location;
    int time;
    char point;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    TopSecret ts;
    std::cin >> ts.location;
    std::getchar();
    std::cin >> ts.point >> ts.time;

    std::cout << "secret code : " << ts.location << '\n';
    std::cout << "meeting point : " << ts.point << '\n';
    std::cout << "time : " << ts.time;

    return 0;
}