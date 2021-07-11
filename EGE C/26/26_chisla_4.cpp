#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

bool zazor(int a, int b, int c) {
    if (b < c) return true;
    else return false; 
    //return (a <= b < c);
}

int main() {
    vector<int> vec;
    int count = 0;
    int size;
    int max = 0;
    ifstream file("26_chisla_4.txt");
    file >> size;
    while (!file.eof()){
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    //cout << vec[(vec.size() / 2) - 1] << ' ' << vec[(vec.size() / 2)] << '\n';
    int sred = vec[vec.size() / 2];
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if ((vec[i] + vec[j]) % 2 == 0 && zazor(vec[(vec.size() / 2) - 1], (vec[i] + vec[j]) / 2, vec[(vec.size() / 2)])) {
               // cout << (vec[i] + vec[j]) / 2 << '\n';
                count++;
                if (max < ((vec[i] + vec[j]) / 2)) max = (vec[i] + vec[j]) / 2;
            }
        }
    }
    cout << count << ' ' << max << '\n';
}