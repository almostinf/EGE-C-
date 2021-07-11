#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("27_partial_sum_3_B.txt");
    int size;
    vector<int> vec(5);
    file >> size;
    int a, b, c;
    file >> a >> b >> c;
    vec.push_back(a + b);
    vec.push_back(a + c);
    vec.push_back(c + b);
    while (!file.eof()) {
        vector<int> troika(3);
        file >> a >> b >> c;
        troika.push_back(a + b);
        troika.push_back(a + c);
        troika.push_back(c + b);
        vector<int> cmb;
        vector<int> vec_temp(5, 0);
        for (auto x : vec) 
            for (auto y : troika) 
                cmb.push_back(x + y);
        for (auto x : cmb) 
            if (x > vec_temp[x % 5]) 
                vec_temp[x % 5] = x;
        for (auto x : vec_temp) 
            if (x != 0) vec[x % 5] = x;
    }
    int max = 0;
    for (auto x : vec) 
        if (x % 5 != 0 && x > max) max = x;
    cout << max << '\n';
}
//27.29