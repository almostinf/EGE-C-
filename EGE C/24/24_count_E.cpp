#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    ifstream file("24_count_E.txt");
    string str;
    int count_E = 0;
    int count_J = 0;
    int count_str = 0;
    while (!file.eof()) {
        file >> str;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == 'J') count_J++;
            else if (str[i] == 'E') count_E++;
        }
        if (count_J > count_E) count_str++;
        count_E = 0;
        count_J = 0;
        str = "";
    }
    cout << count_str << '\n';
    return 0;
}