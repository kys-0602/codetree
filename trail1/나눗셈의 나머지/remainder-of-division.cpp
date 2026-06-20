#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    int freq_num[10]{ 0 };
    while (A > 1) {
        freq_num[(A % B)] += 1;
        A /= B;
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += (freq_num[i] * freq_num[i]);
    }
    std::cout << sum;
    
    return 0;
}