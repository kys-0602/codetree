#include <iostream>

struct PersonInfo {
    char sym;
    int temp;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int ABCD[4]{ 0 };

    PersonInfo pi[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> pi[i].sym >> pi[i].temp;

        if (pi[i].sym == 'Y' && pi[i].temp >= 37)       ABCD[0] += 1;
        else if (pi[i].sym == 'N' && pi[i].temp >= 37)  ABCD[1] += 1;
        else if (pi[i].sym == 'Y' && pi[i].temp < 37)   ABCD[2] += 1;
        else if (pi[i].sym == 'N' && pi[i].temp < 37)   ABCD[3] += 1;
    }

    for (int i = 0; i < 4; ++i) std::cout << ABCD[i] << ' ';
    if (ABCD[0] >= 2) std::cout << 'E';
    
    return 0;
}