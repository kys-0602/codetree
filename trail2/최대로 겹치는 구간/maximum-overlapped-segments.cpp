#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> vec(200 + 2, 0);
    int N; std::cin >> N;

    for (int n = 0; n < N; ++n) {
        int x1, x2; std::cin >> x1 >> x2;

        x1 += 100, x2 += 100;
        for (int i = x1; i < x2; ++i) {
            vec[i] += 1;
        }
    }
    
    int max = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] > max) max = vec[i];
    }

    // int cnt = 0;
    // for (int i = 0; i < vec.size(); ++i) {
    //     if (vec[i] == max) cnt += 1;
    // }

    std::cout << max;

    return 0;
}