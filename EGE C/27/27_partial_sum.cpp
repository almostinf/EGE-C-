#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    ifstream file("27_partial_sum.txt");
    int size;
    vector<int> vec;
    vector<int> vec_out;
    file >> size;
    file >> vec[0] >> vec[1];
    while (!file.eof()) {
        vector<int> pair;
        vector<int> cmb;
        vector<int> vec_temp(0, 3);
        file >> pair[0] >> pair[1];
        for (auto x : vec) 
            for (auto y : pair) 
                cmb.push_back(x + y);
        for (auto x : cmb) 
            if (x > vec_temp[x % 3]) vec_temp[x % 3] = x;
        for (auto x : vec_temp) 
            if (x != 0) vec_out = vec_temp;
    }
    int max = 0;
    for (auto x : vec_out) 
        if (x % 3 != 0 && x > max) max = x;
    cout << max << '\n';
}