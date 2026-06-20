#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    std::vector<int> arr;
    
    int x;
    while (std::cin >> x) {
        if (x == 0) break;

        arr.push_back(x);
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] & 1) std::cout << arr[i] + 3 << ' ';
        else std::cout << (arr[i] >> 1) << ' ';
    }
    
    return 0;
}