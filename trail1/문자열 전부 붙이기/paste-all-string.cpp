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
    std::cout << total_str;

    return 0;
}