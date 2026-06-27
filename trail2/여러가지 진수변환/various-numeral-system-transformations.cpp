#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, B; std::cin >> N >> B;

    std::string answer = "";

    while (N > 0) {
        answer += ((N % B) + '0');
        N /= B;
    }

    for (int i = answer.length() - 1; i >= 0; --i) std::cout << answer[i];

    return 0;
}