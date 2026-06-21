#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n; std::cin >> n;
    std::string A; std::cin >> A;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        std::string str; std::cin >> str;

        if (str == A) cnt += 1;
    }
    std::cout << cnt;

    return 0;
}