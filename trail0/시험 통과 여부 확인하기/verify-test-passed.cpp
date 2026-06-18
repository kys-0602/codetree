#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    if (N >= 80) std::cout << "pass";
    else {
        std::cout << (80 - N) << " more score";
    }

    return 0;
}