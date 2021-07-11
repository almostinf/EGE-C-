#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("26_classic.txt");
    vector<int> vec;
    int size_file, size_person;
    int sum = 0;
    file >> size_file >> size_person;
    cout << size_file << ' ' << size_person << '\n';
    int max = 0;
    while (!file.eof()) {
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    int ind;
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        count++;
        if (sum > size_file) {
            sum -= vec[i];
            ind = i;
            count--;
            break;
        }
    }
    sum -= vec[ind - 1];
    count--;
    cout << sum << '\n';
    for (int i = ind; i < vec.size(); ++i) {
        if (sum + vec[i] <= size_file) {
            if (vec[i] > max) max = vec[i];
        }
    }
    cout << count + 1 << ' ' << max << '\n';
    return 0;
}