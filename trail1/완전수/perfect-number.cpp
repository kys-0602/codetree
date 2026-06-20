#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int start, end; std::cin >> start >> end;

    int cnt = 0;
    for (; start <= end; ++start) {
        int sum = 0;
        for (int i = 1; i < start; ++i) {
            if (start % i == 0) sum += i;
        }

        if (sum == start) cnt += 1;
    }
    std::cout << cnt;
    
    return 0;
}