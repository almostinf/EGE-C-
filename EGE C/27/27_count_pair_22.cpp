#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_count_pair_22_B.txt");
    int size;
    vector<int> buffer;
    file >> size;
    for (int i = 0; i < 6; i++) {
        int num;
        file >> num;
        buffer.push_back(num);
    }
    int count_2 = 0;
    int count_11 = 0;
    int count_22 = 0;
    int another = 0;
    int count_pair = 0;
    while (!file.eof()) {
        int num;
        file >> num;
        if (buffer[0] % 22 == 0) count_22++;
        else if (buffer[0] % 2 == 0) count_2++;
        else if (buffer[0] % 11 == 0) count_11++;
        else another++;
        if (num % 22 == 0) count_pair += count_22 + count_11 + count_2 + another;
        else if (num % 11 == 0) count_pair += count_2 + count_22;
        else if (num % 2 == 0) count_pair += count_11 + count_22;
        else count_pair += count_22;
        for (int i = 0; i < 5; ++i) buffer[i] = buffer[i + 1];
        buffer[5] = num;
    }
    cout << count_pair << '\n';
    return 0;
}