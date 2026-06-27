#include <algorithm>
#include <iostream>
#include <vector>

class Student {
public:
    int height;
    int weight;
    int id;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        students[i].id = i + 1;
        std::cin >> students[i].height >> students[i].weight;
    }

    std::sort(students.begin(), students.end(), [&](const auto& s1, const auto& s2) {
        if (s1.height != s2.height) return s1.height < s2.height;
        return s1.weight > s2.weight;
    });

    for (const auto& student : students) {
        std::cout << student.height << ' ' << student.weight << ' ' << student.id << '\n';
    }

    return 0;
}