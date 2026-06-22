#include <iostream>

int A[100];
int B[100];

bool isContinuousSubsequence(int n1, int n2) {
    for (int i = 0; i <= n1 - n2; ++i) {
        int cnt = 0;
        for (int j = 0; j < n2; ++j) {
            if (A[i + j] == B[j]) {
                cnt += 1;
            } else cnt = 0;
        }

        if (cnt == n2) {
            return true;
        }
    }
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n1, n2; std::cin >> n1 >> n2;    
    for (int i = 0; i < n1; ++i) std::cin >> A[i];
    for (int i = 0; i < n2; ++i) std::cin >> B[i];

    std::cout << (isContinuousSubsequence(n1, n2) ? "Yes" : "No");

    return 0;
}