#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("27_last_num_vec_A.txt");
    int size;
    file >> size;
    vector<int> sum(10);
    while(!file.eof()) {
        int a, b;
        file >> a >> b;
        if ((a % 10) != (b % 10)) {
            sum[a % 10] += a;
            sum[b % 10] += b;
        } else sum[a % 10] += min(a, b);
    }
    for (auto i : sum) cout << i << '\n';
    return 0;
}