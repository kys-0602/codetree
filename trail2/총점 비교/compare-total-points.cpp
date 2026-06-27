#include <algorithm>
#include <iostream>
#include <vector>

class Student {
public:
    std::string name;
    int scores[3];
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].name;
        for (int j = 0; j < 3; ++j) std::cin >> students[i].scores[j];
    }

    std::sort(students.begin(), students.end(), [&](const auto& s1, const auto& s2) {
        return (s1.scores[0] + s1.scores[1] + s1.scores[2]) < (s2.scores[0] + s2.scores[1] + s2.scores[2]);
    });

    for (const auto& student : students) {
        std::cout << student.name << ' ';
        for (int i = 0; i < 3; ++i) std::cout << student.scores[i] << ' ';
        std::cout << '\n';
    }

    return 0;
}