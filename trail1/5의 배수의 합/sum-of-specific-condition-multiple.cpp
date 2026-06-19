#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    int sum = 0;
    if (A <= B) {
        for (; A <= B; ++A) {
            if (A % 5 == 0) sum += A;
        }
    }
    else if (B <= A) {
        for (; B <= A; ++B) {
            if (B % 5 == 0) sum += B;
        }
    }

    std::cout << sum;
    
    return 0;
}