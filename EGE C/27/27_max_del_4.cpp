#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("27_max_del_4_A.txt");
    int size;
    file >> size;
    vector<int> d(3, 100001);
    int sum = 0;
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        // new
        if (abs(a - b) % 4 != 0) {
            for (int i = 0; i < 3; ++i) {
                int k = (abs(a - b) + d[i]) % 4;
                d[k] = min(d[k], abs(a - b) + d[i]);
            }
        }
        if (abs(a - b) < d[abs(a - b) % 4]) 
            d[abs(a - b) % 4] = abs(a - b);
        sum += max(a, b);
    }
    if (sum % 4 != 0) {
        for (auto i : d) {
            if ((sum - i) % 4 == 0) {
                sum -= i;
                break;
            }
        }
    }
    cout << sum << '\n';
    return 0;
}