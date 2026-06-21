#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    
    std::string total_str = "";
    for (int i = 0; i < N; ++i) {
        std::string str; std::cin >> str;
        total_str += str;
    }

    for (int i = 1; i <= total_str.length(); ++i) {
        std::cout << total_str[i - 1];
        if (i % 5 == 0) std::cout << '\n';
    }

    return 0;
}