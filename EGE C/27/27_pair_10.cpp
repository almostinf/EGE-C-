#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_pair_10_B.txt");
    int size;
    file >> size;
    int count_2 = 0, count_5 = 0, count_10 = 0;
    while (!file.eof()) {
        int num;
        file >> num;
        if (num % 10 == 0) count_10++;
        else if (num % 2 == 0) count_2++;
        else if (num % 5 == 0) count_5++;
    }
    //another way
    // int count_10_10 = 0;
    // for (int i = 0; i < 10; ++i) count_10_10 += i;
    cout << count_10 * (size - count_10) + count_2 * count_5 + count_10 * (count_10 - 1) / 2
    << '\n';
    return 0;
}