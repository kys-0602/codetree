#include <iostream>
#include <tuple>

class User {
public:
    std::string id;
    int level;

    User(std::string id = "", int level = 0) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    User u1("codetree", 10);
    std::string str; int level;
    std::cin >> str >> level;
    User u2(str, level);

    std::cout << "user " << u1.id << ' ' << "lv " << u1.level << '\n';
    std::cout << "user " << u2.id << ' ' << "lv " << u2.level;

    return 0;
}