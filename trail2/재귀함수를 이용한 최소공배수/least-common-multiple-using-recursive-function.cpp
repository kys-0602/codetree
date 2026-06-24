#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[10];
    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    int answer = arr[0];
    for (int i = 1; i < N; ++i) {
        answer = lcm(answer, arr[i]);
    }

    std::cout << answer;

    return 0;
}