#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("27_partial_sum_2_B.txt");
    int size;
    vector<int> vec(4);
    file >> size;
    file >> vec[0] >> vec[1] >> vec[2];
    while (!file.eof()) {
        vector<int> troika(3);
        vector<int> cmb;
        vector<int> vec_temp(4, 0);
        file >> troika[0] >> troika[1] >> troika[2];
        for (auto x : vec) 
            for (auto y : troika) 
                cmb.push_back(x + y);
        for (auto x : cmb) 
            if (x > vec_temp[x % 4]) 
                vec_temp[x % 4] = x;
        for (auto x : vec_temp) 
            if (x != 0) vec[x % 4] = x;
    }
    int max = 0;
    for (auto x : vec) 
        if (x % 4 != 0 && x > max) max = x;
    cout << max << '\n';
}
//27.10