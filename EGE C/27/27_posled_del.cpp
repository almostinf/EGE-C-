#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_posled_del_B.txt");
    int size;
    file >> size;
    int max_13 = 0, another = 0;
    while (!file.eof()) {
        int num;
        file >> num;
        if (num % 13 == 0 && num > max_13) {
            if (max_13 > another) another = max_13;
            max_13 = num;
        }
        else if (num > another) another = num;
    }
    cout << max_13 << ' ' << another << '\n';
    cout << max_13 * another << '\n';
    return 0;
}