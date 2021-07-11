#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("27_partial_sum_ost_B.txt");
    int size;
    vector<int> vec(10);
    file >> size;
    file >> vec[0] >> vec[1];
    while (!file.eof()) {
        vector<int> pair(2);
        vector<int> cmb;
        vector<int> vec_temp(10, 0);
        file >> pair[0] >> pair[1];
        for (auto x : vec) 
            for (auto y : pair) 
                cmb.push_back(x + y);
        for (auto x : cmb) 
            if (x > vec_temp[x % 10]) 
                vec_temp[x % 10] = x;
        for (auto x : vec_temp) 
            if (x != 0) vec[x % 10] = x;
    }
    cout << vec[8] << '\n';
}
//27.21