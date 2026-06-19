#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A_kor, A_eng; std::cin >> A_kor >> A_eng;
    int B_kor, B_eng; std::cin >> B_kor >> B_eng;

    if (A_kor > B_kor && A_eng > B_eng) {
        std::cout << 1;
    } else {
        std::cout << 0;
    }

    return 0;
}