#include <iostream>

bool isPerfectNumber(int N) {
    return !(N % 2 == 0) && !(N % 10 == 5) && !(N % 3 == 0 && N % 9 != 0);
}

int getCnt(int A, int B) {
    int cnt = 0;
    for (; A <= B; ++A) {
        if (isPerfectNumber(A)) {
            cnt += 1;
        }
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int A, B; std::cin >> A >> B;
    std::cout << getCnt(A, B);

    return 0;
}