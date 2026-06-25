#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;
    std::string T; std::cin >> T;

    std::vector<std::string> strs(N, "");
    for (int i = 0; i < N; ++i) {
        std::string str; std::cin >> str;
        strs[i] = str;
    }

    std::sort(strs.begin(), strs.end());
    
    int cnt = 0;
    for (const auto& str : strs) {
        if (str.substr(0, T.length()) == T) {
            cnt += 1;
        }

        if (cnt == K) {
            std::cout << str;
            break;
        }
    }

    return 0;
}