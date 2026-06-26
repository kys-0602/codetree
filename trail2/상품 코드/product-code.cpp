#include <iostream>

class Product {
public:
    std::string name;
    int code;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Product prod[2];
    prod[0].name = "codetree";
    prod[0].code = 50;

    std::cin >> prod[1].name >> prod[1].code;
    
    for (int i = 0; i < 2; ++i) {
        std::cout << "product " << prod[i].code << " is " << prod[i].name << '\n';
    }

    return 0;
}