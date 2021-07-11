#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_sum_pair_10_A.txt");
    int size;
    vector<int> ostat(10, 0);
    vector<int> buf;
    int count_pair = 0;
    file >> size;
    cout << size << '\n';
    for (int i = 0; i < 6; ++i) {
        int num;
        file >> num;
        buf.push_back(num);
    }
    while (!file.eof()) {
        int num;
        file >> num;
        ostat[buf[0] % 10]++;
        cout << buf[0] << '\n';  
        //if (num % 10 == 0) count_pair += ostat[0];
        count_pair += ostat[(10 - (num % 10)) % 10];
        cout << count_pair << ' ' << num << ' ' <<  ostat[buf[0] % 10] << '\n';
        for (int i = 0; i < 5; ++i) buf[i] = buf[i + 1];
        buf[5] = num;
    }
    cout << count_pair << '\n';
    return 0;
}