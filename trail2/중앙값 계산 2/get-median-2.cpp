#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec; 
    for (int i = 1, x = 0; i <= N; ++i) {
        std::cin >> x;
        vec.push_back(x);

        // odd & median
        if (i & 1) {
            std::sort(vec.begin(), vec.end());
            std::cout << vec[(i >> 1)] << ' ';
        }
    }

    return 0;
}