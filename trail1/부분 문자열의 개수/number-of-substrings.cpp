#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B; std::cin >> A >> B;

    int answer = 0;
    for (int i = 0; i <= A.length() - B.length(); ++i) {
        int cnt = 0;
        for (int j = 0 ; j < B.length(); ++j) {
            if (A[i + j] == B[j]) {
                cnt += 1;
            }
        }

        if (cnt == B.length()) answer += 1;
    }
    std::cout << answer;

    return 0;
}