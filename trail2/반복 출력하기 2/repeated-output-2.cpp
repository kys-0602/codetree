#include <iostream>

void printHelloWorld(int n) {
    if (n == 0) return;

    std::cout << "HelloWorld\n";
    printHelloWorld(n - 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    printHelloWorld(N);

    return 0;
}