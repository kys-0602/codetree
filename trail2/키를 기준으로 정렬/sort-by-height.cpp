#include <algorithm>
#include <iostream>
#include <vector>

class Person {
public:
    std::string name;
    int height;
    int weight;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<Person> people(n);
    for (int i = 0; i < n; ++i) std::cin >> people[i].name >> people[i].height >> people[i].weight;

    std::sort(people.begin(), people.end(), [&](const auto& p1, const auto& p2) {
        return p1.height < p2.height;
    });

    for (const auto& person : people) {
        std::cout << person.name << ' ' << person.height << ' ' << person.weight << '\n';
    }

    return 0;
}