#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_max_par_2_B.txt");
    int size;
    int sum = 0;
    int min_razn = 1000001;
    file >> size;
    cout << size << '\n';
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        if (abs(a - b) % 4 != 0 && abs(a - b) < min_razn) min_razn = abs(a - b);
    }
    cout << sum << '\n';
    if (sum % 4 == 0) sum -= min_razn;
    cout << sum << '\n';
    return 0;
}