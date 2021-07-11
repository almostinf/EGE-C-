#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_lastdig_7_A.txt");
    int size;
    file >> size;
    int sum = 0;
    vector<int> vec;
    vector<int> count_dig(10);
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        vec.push_back(abs(a - b));
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec) cout << i % 10 << ' ';
    cout << '\n';
    cout << sum << '\n';
    cout << sum - vec[0] - vec[1] - vec[3] << '\n';
    cout << sum - vec[8] << '\n';
    return 0;
}