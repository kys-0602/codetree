#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    int div = A / B;
    std::cout << div << ".";
    
    int mod = A % B;
    int cnt = 0;
    while (cnt < 21 - 1) {
        if (mod < B) mod *= 10;
        std::cout << (mod / B) % 10;
        mod %= B;
        cnt += 1;
    }

    return 0;
}