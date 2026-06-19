#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int width, height;
    std::cin >> width >> height;
    width += 8, height *= 3;
    std::cout << width << '\n' << height << '\n' << (width * height);

    return 0;
}