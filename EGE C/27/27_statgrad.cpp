#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_statgrad_B.txt");
    int sum = 0;
    int size;
    file >> size;
    int count_chet = 0;
    int count_nechet = 0;
    long int d1 = 1000000001;
    long int d2 = 1000000001;
    while (!file.eof()) {
        int a, b;
        file >> a >> b;
        sum += max(a, b);
        if (max(a, b) % 2 ==0) count_chet++;
        else count_nechet++;
        if (abs(a - b) % 2 != 0 && abs(a - b) < d1) 
            d1 = abs(a - b);
        if (abs(a - b) % 2 != 0 && abs(a - b) < d2 && d1 != abs(a - b)) 
            d2 = abs(a - b);
    }
    cout << sum % 2 << ' ' << count_chet << ' ' << count_nechet << '\n';
    cout << sum << '\n';
    cout << sum - d1 - d2 << '\n';
    // cout << sum << '\n';
    // cout << (sum - d)% 2 << ' ' << count_chet << ' ' << count_nechet << '\n';
    // cout << sum - d<< '\n';
}