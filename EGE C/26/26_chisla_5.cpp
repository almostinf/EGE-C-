#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

bool zazor(int a, int b, int c) { 
    if ((a < b) && (b < c)) return true;
    else return false;
}

int main() {
    vector<int> vec;
    int count = 0;
    int size;
    long int min = 100000001;
    ifstream file("26_chisla_5.txt");
    file >> size;
    while (!file.eof()){
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    cout << vec.size() / 3 << '\n';
    int sred = vec[vec.size() / 2];
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if ((vec[i] + vec[j]) % 2 == 0 && zazor(vec[(vec.size() / 3)], (vec[i] + vec[j]) / 2, vec[((vec.size() / 4)) * 3])) {
               // cout << (vec[i] + vec[j]) / 2 << '\n';
                count++;
                if (min > ((vec[i] + vec[j]) / 2)) min = (vec[i] + vec[j]) / 2;
            }
        }
    }
    cout << count << ' ' << min << '\n';
}