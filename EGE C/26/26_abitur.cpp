#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    ifstream file("26_demo.txt");
    int sum = 0;
    int size, max;
    float average;
    int count = 0;
    int next;
    vector<int> vec;
    file >> size >> max;
    cout << size << ' ' << max << '\n';
    while (!file.eof()) {
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(begin(vec), end(vec), [](int a, int b) {
        return a > b;
    });
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        count++;
        if (count == max) {
            average = sum / count;
            for (int j = i; j < vec.size(); ++j) {
                if (vec[j] != vec[i]) {
                    cout << average << ' ' << vec[j] << '\n';
                    break;
                }
            }
            break;
        }
    }
}

