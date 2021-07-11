#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

int razn(vector<int> vec, int num, int i, int j) {
    int raznic;
    for (i; i < j + 1; ++i) {
        if (vec[i] < num) raznic = num - vec[i];
    }
    return raznic;
}

int main() {
    vector<int> vec;
    int count = 0;
    long int low = 1000000001;
    int size;
    ifstream file("26_chisla_3_test.txt");
    file >> size;
    while (!file.eof()){
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if ((vec[i] + vec[j]) % 2 == 0) {
                if (razn(vec, (vec[i] + vec[j]) / 2, i, j) == 1) {
                    count++;
                    if ((vec[i] + vec[j]) / 2 < low) 
                        low = (vec[i] + vec[j]) / 2;
                }
                //if (binary_search(vec.begin(), vec.end(), ((vec[i] + vec[j]) / 2) - 5)) cout << "win!\n";
            }
        }
    }
    cout << count << ' ' << low << '\n';
}