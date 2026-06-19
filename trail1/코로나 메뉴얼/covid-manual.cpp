#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int e = 0;
    for (int i = 0; i < 3; ++i) {
        char sym; int temp; std::cin >> sym >> temp;

        if (sym == 'Y') {
            if (temp >= 37) {
                e += 1;
            }
        }
    }

    std::cout << (e >= 2 ? "E" : "N");

    return 0;
}