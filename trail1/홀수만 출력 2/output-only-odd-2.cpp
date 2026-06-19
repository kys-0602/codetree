#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int B, A; std::cin >> B >> A;

    for (; B >= A; B -= 2) {
        std::cout << B << ' ';
    }

    return 0;
}