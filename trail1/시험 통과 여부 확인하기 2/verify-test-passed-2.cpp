#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    int cnt = 0;
    for (int n = 0; n < N; ++n) {
        int arr[4];
        for (int i = 0; i < 4; ++i) std::cin >> arr[i];

        int sum = 0, avg = 0;
        for (int i = 0; i < 4; ++i) sum += arr[i];
        avg = sum / 4;

        if (avg >= 60) {
            std::cout << "pass";
            cnt += 1;
        } else {
            std::cout << "fail";
        }
        std::cout << '\n';
    }

    std::cout << cnt;
    
    return 0;
}