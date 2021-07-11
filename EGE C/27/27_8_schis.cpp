#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_8_schis_A.txt");
    int size;
    file >> size;
    int sum = 0;
    int min_razn = 1000001;
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        if (abs(a - b) % 8 != 0 && abs(a - b) < min_razn) min_razn = abs(a - b);
    }
    if (sum % 8 == 3) sum -= min_razn;
    cout << sum << '\n';
}