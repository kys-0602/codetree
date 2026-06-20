#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[100 + 1]{ 0 };

    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    int two_cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == 2) two_cnt += 1;
        if (two_cnt == 3) {
            std::cout << i + 1;
            break;
        }
    }
    
    return 0;
}