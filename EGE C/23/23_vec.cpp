#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    for (int i = 2; i <= 16; ++i) {
        if (i % 2 == 0) vec.push_back(vec[i / 2] + vec[i - 1]);
        else vec.push_back(vec[i - 1]);
    }
    cout << vec.back() << '\n';
    return 0;
}