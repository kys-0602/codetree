#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string A; std::cin >> A;
    std::string B; std::cin >> B;

    int cnt = 1;
    while (cnt < A.length()) {
        std::rotate(A.begin(), A.end() - 1, A.end());
        if (A == B) break;
        cnt += 1;
    }

    std::cout << (cnt < A.length() ? cnt : -1);

    return 0;
}