#include <algorithm>
#include <iostream>

bool isPalindrome(std::string str) {
    std::string str_r = str;
    std::reverse(str_r.begin(), str_r.end());
    return str == str_r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    std::cout << (isPalindrome(str) ? "Yes": "No");

    return 0;
}