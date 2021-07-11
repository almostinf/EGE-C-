#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;


int main() {
    map<char, int> mp;
    string str;
    ifstream file("24_probnik.txt");
    file >> str;
    int counter = 0;
    for (char i = 'A'; i <= 'Z'; ++i) {
        mp[i] = 0;
        counter++;
    }
    for (int i = 1; i < str.size() - 1; ++i) 
        if (str[i - 1] == 'X' && str[i + 1] == 'Z') mp[str[i]]++;
    for (auto i : mp) cout << i.first << ' ' << i.second << '\n';
    return 0;
}