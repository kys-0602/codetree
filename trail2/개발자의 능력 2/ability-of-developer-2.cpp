#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[6];
    for (int i = 0; i < 6; ++i) std::cin >> arr[i];

    std::sort(arr, arr + 6);

    int s1 = arr[0] + arr[5];
    int s2 = arr[1] + arr[4];
    int s3 = arr[2] + arr[3];

    int _max = std::max(s1, std::max(s2, s3));
    int _min = std::min(s1, std::min(s2, s3));

    std::cout << _max - _min;

    return 0;
}