#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    ifstream file("24_min_substring.txt");
    string str;
    file >> str;
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] > str[i + 1]) count++;
        else {
            if (count > max_count) max_count = count;
            count = 0;
        }
    }
    cout << max_count << '\n';
    return 0;
}