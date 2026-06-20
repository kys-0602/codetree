#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int start, end; std::cin >> start >> end;

    int answer = 0;
    for (; start <= end; ++start) {
        int cnt = 0;
        for (int i = 1; i <= start; ++i) {
            if (start % i == 0) {
                cnt += 1;
            }
        }

        if (cnt == 3) answer += 1;
    }
    std::cout << answer;
    
    return 0;
}