#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;
    
    int sum = 0;
    for (; A <= B; ++A) sum += A;
    std::cout << sum;
    
    return 0;
}