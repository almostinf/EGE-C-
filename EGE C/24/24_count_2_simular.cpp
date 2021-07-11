#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;


int main() {
    ifstream file("24_count_2_simular.txt");
    string str;
    file >> str;
    map<char, int> mp;
    vector<int> vec;
    for (int i = 1; i < str.size() - 1; ++i) {
        if (str[i - 1] == str[i + 1]) mp[str[i]]++;
    }
    //for (auto i : mp) cout << i.first << ' ' << i.second << '\n';
    for (auto i : mp) vec.push_back(i.second);
    cout << *max_element(vec.begin(), vec.end()) << '\n';
    return 0;
}