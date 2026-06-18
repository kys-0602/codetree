#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b; std::cin >> b >> a;

    // 1. swap 연산을 의도한 건지 잘 모르겠지만, 그냥 이렇게 해도 정답이라...
    std::cout << a << ' ' << b;

    return 0;
}