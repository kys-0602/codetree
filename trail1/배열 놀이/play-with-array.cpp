#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[100 + 1]{ 0 };
    int N, Q; std::cin >> N >> Q;

    // N
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    // Q
    for (int q = 0; q < Q; ++q) {
        int op; std::cin >> op;

        if (op == 1) {
            int a; std::cin >> a;
            std::cout << arr[a - 1] << '\n';
        } else if (op == 2) {
            int b; std::cin >> b;

            bool found = false;
            for (int i = 0; i < N; ++i) {
                if (arr[i] == b) {
                    std::cout << i + 1 << '\n';
                    found = true;
                    break;
                }
            }

            if (found == false) std::cout << "0\n";

        } else if (op == 3) {
            int s, e; std::cin >> s >> e;

            for (; s <= e; ++s) {
                std::cout << arr[s - 1] << ' ';
            }
            std::cout << '\n';
        }
    }
    
    return 0;
}