#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int mid, fin; std::cin >> mid >> fin;

    int price = 0;
    if (mid >= 90) {
        if (fin >= 95) price = 100000;
        else if (fin >= 90) price = 50000;
    }

    std::cout << price;

    return 0;
}