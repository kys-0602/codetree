#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (; N <= 100; ++N) {
        if (N >= 90) std::cout << 'A';
        else if (N >= 80) std::cout << 'B';
        else if (N >= 70) std::cout << 'C';
        else if (N >= 60) std::cout << 'D';
        else std::cout << 'F';
        std::cout << ' ';
    }

    return 0;
}