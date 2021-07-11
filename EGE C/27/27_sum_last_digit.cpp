#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_sum_last_digit_B.txt");
    int size;
    int min_razn = 1000001;
    int sum = 0;
    file >> size;
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        if (abs(a - b) % 10 != 0 && abs(a - b) < min_razn) min_razn = abs(a - b);
    }
    cout << sum << '\n';
    if (sum % 10 == 0) sum -= min_razn;
    cout << sum << '\n';
    return 0;
}