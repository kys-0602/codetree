#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> A(n, 0); for (int i = 0; i < n; ++i) std::cin >> A[i];
    std::vector<int> B(n, 0); for (int i = 0; i < n; ++i) std::cin >> B[i];

    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());

    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            std::cout << "No";
            return 0;
        }
    }

    std::cout << "Yes";

    return 0;
}