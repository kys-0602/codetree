#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A[100 + 1]{ 0 };
    int B[100 + 1]{ 0 };

    int N1, N2; std::cin >> N1 >> N2;
    for (int i = 0; i < N1; ++i) std::cin >> A[i];
    for (int i = 0; i < N2; ++i) std::cin >> B[i];

    for (int i = 0; i <= N1 - N2; ++i) {
        bool seq = true;
        for (int j = 0; j < N2; ++j) {
            if (A[i + j] != B[j]) seq = false;
        }

        if (seq) {
            std::cout << "Yes\n";
            return 0;
        }
    }

    std::cout << "No";
    
    return 0;
}