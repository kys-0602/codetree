#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    bool b1 = false, b2 = false;
    for (int i = 1; i < str.length(); ++i) {
        // ee
        if (str[i - 1] == 'e' && str[i] == 'e') b1 = true;
        
        // ab
        if (str[i - 1] == 'a' && str[i] == 'b') b2 = true;
    }

    std::cout << (b1 ? "Yes" : "No") << ' ' << (b2 ? "Yes" : "No");

    return 0;
}