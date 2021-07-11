#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_interval_5_A.txt");
    int size;
    int max = 0;
    int maxsum = 0;
    file >> size;
    vector<int> buffer;
    for (int i = 0; i < 5; ++i) {
        int num;
        file >> num;
        buffer.push_back(num);
    }
    while (!file.eof()) {
        int num;
        file >> num;
        for (auto i : buffer) cout << i << ' ';
        cout << '\n';
        cout << num << '\n';
        if (buffer[0] > max) max = buffer[0];
        if (pow(max, 2) + pow(num, 2) > maxsum) maxsum = pow(max, 2) + pow(num, 2);
        cout << max << ' ' << maxsum << '\n';
        for (int i = 0; i < 4; ++i) buffer[i] = buffer[i + 1];
        buffer[4] = num;
    }
    return 0;
}