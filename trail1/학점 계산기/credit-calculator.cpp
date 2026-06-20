#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    float sum = 0.0f;
    for (int i = 0; i < N; ++i) {
        float x; std::cin >> x;

        sum += x;
    }

    float avg = sum / N;
    std::cout.precision(1);
    std::cout << std::fixed << avg << '\n';
    if (avg >= 4.0f) std::cout << "Perfect";
    else if (avg >= 3.0f) std::cout << "Good";
    else std::cout << "Poor";
    
    return 0;
}