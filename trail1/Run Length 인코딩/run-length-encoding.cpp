#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str; std::cin >> str;
    
    std::string RLE = "";
    char ch = str[0];
    int cnt = 1;
    for (int i = 1; i < str.length(); ++i) {
        if (ch == str[i]) {
            cnt += 1;
        } else {
            RLE += ch;
            RLE += std::to_string(cnt);
            ch = str[i];
            cnt = 1;
        }
    }
    RLE += ch;
    RLE += std::to_string(cnt);

    std::cout << RLE.length() << '\n' << RLE;

    return 0;
}