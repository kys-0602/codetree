#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    for (; N <= 100; ++N) {
        char score = 'F';
        if (N >= 90) score = 'A';
        else if (N >= 80) score = 'B';
        else if (N >= 70) score = 'C';
        else if (N >= 60) score = 'D';

        std::cout << score << ' '; 
    }
    
    return 0;
}