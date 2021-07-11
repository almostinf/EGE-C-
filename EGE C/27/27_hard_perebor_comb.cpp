#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;

vector<vector<int>> comb(vector<int> vec) {
    vector<vector<int>> vec_out;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size(); ++j) {
            for (int k = 0; k < vec.size(); ++k) {
                vec_out.push_back({vec[i], vec[j], vec[k]});
            }
        }
    }
    vec_out.erase(unique(vec_out.begin(), vec_out.end()));
    return vec_out;
}
int main() {
    ifstream file("27_hard_perebor_comb_B.txt");
    vector<int> vec;
    int size;
    file >> size;
    while (!file.eof()) {
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });
    vec.erase(find(vec.begin(), vec.end(), vec[100]), vec.end());
    //for (auto x : vec) cout << x << ' ';
    vector<vector<int>> vec_out = comb(vec);
    int max = 0;
    for (auto x : vec_out) 
        if (((x[0] + x[1] + x[2]) % 3) == 0 && (x[0] + x[1] + x[2]) > max) 
            max = (x[0] + x[1] + x[2]);
    cout << max << '\n';
}