#include <iostream>

bool five(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return (original % 2 == 0 && sum % 5 == 0);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::cout << (five(n) ? "Yes": "No");

    return 0;
}