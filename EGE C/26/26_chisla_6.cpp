#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int count = 0;
    int size;
    int max = 0;
    ifstream file("26_chisla_6.txt");
    file >> size;
    while (!file.eof()){
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 31; j < vec.size(); ++j) {
            if ((vec[i] + vec[j]) % 2 == 0) count++;
            if (max < (vec[i] + vec[j]) && (vec[i] + vec[j]) % 2 == 0) max = (vec[i] + vec[j]) / 2;
        }
    }
    cout << count << ' ' <<max << '\n';
}