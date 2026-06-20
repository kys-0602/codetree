#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10 - 1]{ 0 };

    int x;
    while (std::cin >> x) {
        if (x == 0) break;

        arr[x / 10 - 1] += 1;
    }

    for (int i = 0; i < 10 - 1; ++i) {
        std::cout << (i + 1) << ' ' << '-' << ' ' << arr[i] << '\n';
    }
    
    return 0;
}