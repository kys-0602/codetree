#include <iostream>

void print() {
    std::cout << "12345^&*()_\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        print();
    }

    return 0;
}