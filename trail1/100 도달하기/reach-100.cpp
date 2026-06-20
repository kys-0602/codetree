#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    std::vector<int> vec(2, 0);
    vec[0] = 1;
    std::cin >> vec[1];
    
    int i = 1;
    for (;;) {
        int num = vec[i - 1] + vec[i];
        vec.push_back(num);
        i += 1;
        if (num > 100) break;
    }

    for (const auto& num : vec) std::cout << num << ' ';

    return 0;
}