#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    ifstream file("24_count_symb.txt");
    string str;
    vector<int> vec;
    map<char, int> mp;
    for (char symb = 'A'; symb <= 'Z'; ++symb) mp[symb] = 0;
    file >> str;
    for (int i = 1; i < str.size() - 1; ++i) {
        if (str[i - 1] == 'A' && str[i + 1] == 'C') mp[str[i]]++;
    }
    // for (char i = 'A'; i <= 'Z'; ++i) {
    //     vec.push_back(mp[i]);
    //     if (mp[i] == 72) cout << i << '\n';
    // } 
    // cout << *max_element(vec.begin(), vec.end()) << '\n';
    for (char i = 'A'; i <= 'Z'; ++i) {
        cout << i << ' ' << mp[i] << '\n';
    } 
    return 0;
}