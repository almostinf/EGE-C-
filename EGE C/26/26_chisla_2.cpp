#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

int pos(vector<int> vec, int num, int i, int j) {
    int pos;
    for (i; i < j + 1; ++i) {
        if (vec[i] < num) pos++;
    }
    return pos + i;
}

int main() {
    vector<int> vec;
    int max = 0;
    int allcount = 0;
    int size;
    ifstream file("26_chisla_2_test.txt");
    file >> size;
    while (!file.eof()){
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            int count = 0;
            count = pos(vec, (vec[i] + vec[j]) / 2, i, j);
            if (count != 0 && (count % 3) == 0) {
                allcount++;
                if (count > max) max = count;
            } 
        }
    }
    cout << allcount << ' ' << max << '\n';
}
//1. 499497 99911155