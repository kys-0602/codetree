#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string S; std::cin >> S;
    int Q; std::cin >> Q;
    for (int q = 0; q < Q; ++q) {
        int type; std::cin >> type;

        if (type == 1) {
            int a, b; std::cin >> a >> b;

            char temp = S[a - 1];
            S[a - 1] = S[b - 1];
            S[b - 1] = temp;
        } else if (type == 2) {
            char x, y;
            std::cin >> x;
            std::getchar();
            std::cin >> y;

            for (int i = 0; i < S.length(); ++i) {
                if (S[i] == x) S[i] = y;
            }
        }
        std::cout << S << '\n';
    }

    return 0;
}