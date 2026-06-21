#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::vector<int> vec;

    int x;
    while (std::cin >> x) {
        if (x == 999 || x == -999) break;
        vec.push_back(x);
    }

    int min = vec[0];
    int max = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] < min) min = vec[i];
        if (vec[i] > max) max = vec[i];
    }

    std::cout << max << ' ' << min;

    return 0;
}