#include <iostream>
#include <vector>

void divEven(std::vector<int>& vec) {
    for (auto& num : vec) {
        if ((num % 2 == 0)) {
            num >>= 1;
        }

        std::cout << num << ' ';
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];
    divEven(vec);

    return 0;
}