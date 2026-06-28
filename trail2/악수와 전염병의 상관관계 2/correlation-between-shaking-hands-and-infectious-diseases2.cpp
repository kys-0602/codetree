#include <algorithm>
#include <iostream>
#include <vector>

struct InfectionInfo {
    int t;
    int x;
    int y;
};

struct InfectionInfo2 {
    bool isInfection;           // 감염 여부
    int cnt;                    // 전염 횟수
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // N: N명의 개발자들
    // K: K번의 악수
    // P: 처음 전염병에 걸려 있는 개발자의 번호
    // T: T번
    int N, K, P, T; std::cin >> N >> K >> P >> T;

    std::vector<InfectionInfo> infos;
    for (int i = 0; i < T; ++i) {
        // t초에 x와 y 개발자가 악수 함을 의미
        int t, x, y; std::cin >> t >> x >> y;

        infos.push_back({ t, x, y });
    }

    // 시간순 정렬
    std::sort(infos.begin(), infos.end(), [&](const auto& i1, const auto& i2) {
        return i1.t < i2.t;
    });

    std::vector<InfectionInfo2> infos2(N, { false, 0 });
    infos2[P - 1].isInfection = true;
    for (const auto& info : infos) {
        int x = info.x - 1;
        int y = info.y - 1;

        // 서로 전염
        bool xCanInfect = infos2[x].isInfection && infos2[x].cnt < K;
        bool yCanInfect = infos2[y].isInfection && infos2[y].cnt < K;

        if (xCanInfect) {
            infos2[y].isInfection = true;
            infos2[x].cnt++;
        }

        if (yCanInfect) {
            infos2[x].isInfection = true;
            infos2[y].cnt++;
        }
    }

    for (const auto& info : infos2) {
        std::cout << info.isInfection;
    }

    return 0;
}