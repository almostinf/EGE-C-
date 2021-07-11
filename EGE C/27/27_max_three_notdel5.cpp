#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main() {
    ifstream file("27_max_three_notdel5_B.txt");
    int size;
    file >> size;
    int sum = 0;
    int d = 10001;
    vector<int> vec;
    while (!file.eof()) {
        int a, b, c;
        int max = 0;
        file >> a >> b >> c;
        vec = {a, b, c};
        for (int i = 0; i < vec.size(); ++i) {
            if (vec[i] > max) 
                max = vec[i];
        }
        auto it = find(vec.begin(), vec.end(), max);
        sum += max;
        vec.erase(it);
        if (abs(vec[0] - max) % 5 != 0 && abs(vec[0] - max) < d) d = abs(vec[0] - max);
        if (abs(vec[1] - max) % 5 != 0 && abs(vec[1] - max) < d) d = abs(vec[1] - max);
    }
    cout << sum << '\n';
    if (sum % 5 == 0) sum -= d;
    cout << sum << '\n';
    return 0;
}


// int main() {
//     ifstream file("27_max_three_notdel5_A.txt");
//     int size;
//     file >> size;
//     int sum = 0;
//     int d = 10001;
//     vector<int> vec;
//     while (!file.eof()) {
//         int a, b, c;
//         file >> a >> b >> c;
//         vec = {a, b, c};
//         //mojno otsortirovat vector, poslednee chislo budet max
//         sort(vec.begin(), vec.end());
//         sum += vec[2];
//         if (abs(vec[2] - vec[0]) % 5 != 0 && abs(vec[2] - vec[0]) < d) d = abs(vec[2] - vec[0]);
//         if (abs(vec[2] - vec[1]) % 5 != 0 && abs(vec[2] - vec[1]) < d) d = abs(vec[2] - vec[1]);
//     }
//     cout << sum << '\n';
//     if (sum % 5 == 0) sum -= d;
//     cout << sum << '\n';
//     return 0;
// }