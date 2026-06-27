#include <cmath>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A, B; std::cin >> A >> B;
    std::string N; std::cin >> N;

    int num = 0;
    for (int i = N.length() - 1, power = 0; i >= 0; --i) {
        num += (N[i] - '0') * std::pow(A, power++);
    }

    // std::cout << num;

    std::string answer = "";
    while (num > 0) {
        answer += ((num % B) + '0');
        num /= B;
    }

    for (int i = answer.length() - 1; i >= 0; --i) {
        std::cout << answer[i];
    }

    return 0;
}