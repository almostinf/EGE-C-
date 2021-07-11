#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("26_predpriyatia.txt");
    vector<pair<int, int>> vec;
    int size_part, allmoney;
    int AllSum = 0;
    file >> size_part >> allmoney;
    cout << size_part << ' ' << allmoney << '\n';
    while (!file.eof()) {
        int price, count;
        char a;
        file >> price >> count >> a;
        if (a == 'A') AllSum += price * count;
        if (a == 'B') vec.emplace_back(price, count);    
    }
    sort(vec.begin(), vec.end(), [](pair<int, int> p1, pair<int, int> p2) {
        return p1.first < p2.first;
    });
    int count_B = 0;
    int left;
    int ind;
    for (int i = 0; i < vec.size(); ++i) {
        int sum = vec[i].first * vec[i].second;
        AllSum += sum;
        count_B += vec[i].second;
        if (AllSum > allmoney) {
            ind = i;
            left = allmoney - (AllSum - sum);
            AllSum -= sum;
            count_B -= vec[i].second;
            break;
        }
    }
    cout << vec[ind].first << '\n';
    cout << left << ' ' << count_B << '\n';
    for (int i = 1; i < vec[ind].second; ++i) {
        int sum = vec[ind].first;
        AllSum += sum;
        count_B++;
        if (AllSum > allmoney) {
            left = allmoney - (AllSum - sum);
            count_B--;
            break;
        }
    }
    cout << left << ' ' << count_B << '\n';
    return 0;
}