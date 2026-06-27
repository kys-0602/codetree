#include <algorithm>
#include <iostream>
#include <vector>

class Student {
public:
    std::string name;
    int kor;
    int eng;
    int math;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].name;
        std::cin >> students[i].kor >> students[i].eng >> students[i].math;
    }

    std::sort(students.begin(), students.end(), [&](const auto& s1, const auto& s2) {
        if (s1.kor != s2.kor) return s1.kor > s2.kor;
        else if (s1.eng != s2.eng) return s1.eng > s2.eng;
        return s1.math > s2.math;
    });

    for (const auto& student : students) {
        std::cout << student.name << ' ' << student.kor << ' ' << student.eng << ' ' << student.math << '\n';
    }

    return 0;
}