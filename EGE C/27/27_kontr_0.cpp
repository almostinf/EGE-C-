#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
    ifstream file("27_kontr_0_B.txt");
    bool check = true;
    int max_7;
    int another;
    while (check) {
        int num;
        file >> num;
        if (num == 0) check = false;
        if (num % 7 == 0 && num > max_7) max_7 = num;
        else if (num % 7 != 0 && num > another) another = num;
    }
    cout << max_7 * another << '\n';
    return 0;
}