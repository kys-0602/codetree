#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A; std::cin >> A;
    std::string cmd; std::cin >> cmd;
    for (const auto& ch : cmd) {
        if (ch == 'L') std::rotate(A.begin(), A.begin() + 1, A.end());
        else if (ch == 'R') std::rotate(A.begin(), A.end() - 1, A.end());
    }
    std::cout << A;

    return 0;
}