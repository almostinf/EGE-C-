#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    ifstream file("24_substr_YZ.txt");
    string str;
    int count_YZ = 0;
    int count_str = 0;
    while (!file.eof()) {
        file >> str;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == 'Y' && str[i + 1] == 'Z') count_YZ++;
        }
        if (count_YZ > 1) count_str++;
        count_YZ = 0;
        str = "";
    }
    cout << count_str << '\n';
    return 0;
}