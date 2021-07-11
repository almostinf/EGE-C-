#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_posled_del_10_B.txt");
    int size;
    file >> size;
    int max_2 = 0, max_5 = 0, max_10 = 0, another = 0;
    while (!file.eof()) {
        int num;
        file >> num;
        if (num % 10 == 0 && num > max_10) {
            if (max_10 > another) another = max_10;
            max_10 = num;
        } else if (num % 2 == 0 && num > max_2) max_2 = num;
        else if (num % 5 == 0 && num > max_5) max_5 = num;
        else if (num > another) another = num;
    }
    cout << max_2 << ' ' << max_5 << ' ' << max_10 << ' ' << another << '\n';
    cout << max_10 * another << '\n';
    cout << max_2 * max_5 << '\n';
    return 0;
}