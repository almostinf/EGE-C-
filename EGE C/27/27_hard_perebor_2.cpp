#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    ifstream file("27_hard_perebor_2_B.txt");
    vector<int> vec(1, 0);
    int size;
    file >> size;
    while (!file.eof()) {
        vector<int> pair(2);
        file >> pair[0] >> pair[1];
        vector<int> cmb;
        for (auto x : pair) 
            for (auto y : vec) 
                cmb.push_back(x + y);
        sort(cmb.begin(), cmb.end());
        vec.clear();
        if (cmb.size() < 1000) for (auto x : cmb) vec.push_back(x);
        else for (int x = 0; x < 1001; ++x) vec.push_back(cmb[x]);
    }
    long int min = 1000000001;
    for (auto x : vec) 
        if (x % 16 == 15 && x < min) min = x;
    cout << min << '\n';
}