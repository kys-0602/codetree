#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    if (((N & 1) && (N % 3 == 0)) || (!(N & 1) && (N % 5 == 0))) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    return 0;
}