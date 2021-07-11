#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_min_par_A.txt");
    int size;
    int sum = 0;
    int min_razn;
    file >> size;
    bool flag = false;
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += min(a, b);
        if (!flag && abs(a - b) % 51 != 0) {
            min_razn = abs(a - b);
            flag = true;
        } else if (flag && abs(a - b) % 51 != 0)
            if (abs(a - b) < min_razn) min_razn = abs(a - b);
    }
    cout << sum << '\n';
    cout << sum % 51 << '\n';
    if (sum % 51 == 0) {
        sum += min_razn;
    }
    cout << sum << '\n';
    return 0;
}