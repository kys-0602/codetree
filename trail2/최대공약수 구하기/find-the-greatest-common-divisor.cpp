#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    return a;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n, m; std::cin >> n >> m;
    std::cout << gcd(n, m);

    return 0;
}