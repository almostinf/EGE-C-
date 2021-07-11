#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27-A_demo.txt");
    vector<int> vec(3, 1000000);
    int count;
    file >> count;
    int sum = 0;
    while(!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        if (vec[abs(a - b) % 3] > abs(a - b)) vec[abs(a - b) % 3] = abs(a - b);
    }
    cout << sum << '\n';
    if (sum % 3 != 0) cout << sum << '\n';
    else {
        cout << sum - *min_element(vec.begin() + 1, vec.end());
    }
    cout << '\n';
    for (auto i : vec) cout << i << ' ';
}