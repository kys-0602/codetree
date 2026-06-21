#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B; std::cin >> A >> B;

    std::size_t pos = A.find(B);
    while (pos != std::string::npos) {
        A.erase(pos, B.length());
        pos = A.find(B);
    }

    std::cout << A;

    return 0;
}