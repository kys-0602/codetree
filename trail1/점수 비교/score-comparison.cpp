#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A_Math, A_Eng; std::cin >> A_Math >> A_Eng;
    int B_Math, B_Eng; std::cin >> B_Math >> B_Eng;

    std::cout << ((A_Math > B_Math) && (A_Eng > B_Eng));

    return 0;
}