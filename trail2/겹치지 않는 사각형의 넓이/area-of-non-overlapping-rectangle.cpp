#include <iostream>

int gARR[2000 + 2][2000 + 2];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a_x1, a_y1, a_x2, a_y2; std::cin >> a_x1 >> a_y1 >> a_x2 >> a_y2;
    int b_x1, b_y1, b_x2, b_y2; std::cin >> b_x1 >> b_y1 >> b_x2 >> b_y2;
    int m_x1, m_y1, m_x2, m_y2; std::cin >> m_x1 >> m_y1 >> m_x2 >> m_y2;

    a_x1 += 1000, a_y1 += 1000, a_x2 += 1000, a_y2 += 1000;
    b_x1 += 1000, b_y1 += 1000, b_x2 += 1000, b_y2 += 1000;
    m_x1 += 1000, m_y1 += 1000, m_x2 += 1000, m_y2 += 1000;

    for (int y = a_y1; y < a_y2; ++y) {
        for (int x = a_x1; x < a_x2; ++x) {
            gARR[y][x] = 1;
        }
    }

    for (int y = b_y1; y < b_y2; ++y) {
        for (int x = b_x1; x < b_x2; ++x) {
            gARR[y][x] = 2;
        }
    }

    for (int y = m_y1; y < m_y2; ++y) {
        for (int x = m_x1; x < m_x2; ++x) {
            gARR[y][x] = -1;
        }
    }

    int a_area = 0, b_area = 0;
    for (int y = 0; y < 2002; ++y) {
        for(int x = 0; x < 2002; ++x) {
            if (gARR[y][x] == 1) a_area += 1;
            else if (gARR[y][x] == 2) b_area += 1;
        }
    }

    std::cout << a_area + b_area;

    return 0;
}