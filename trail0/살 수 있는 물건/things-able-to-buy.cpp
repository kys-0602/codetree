#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    if (N >= 3000) std::cout << "book";
    else if (N >= 1000) std::cout << "mask";
    else std::cout << "no";

    return 0;
}