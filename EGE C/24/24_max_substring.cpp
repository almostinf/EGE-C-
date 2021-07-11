#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    ifstream file("24_max_substring.txt");
    string str;
    char symb;
    char symb_max;
    int count = 0;
    int max_count = 0;
    file >> str;
    bool check = true;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] < str[i + 1] && check) {
            symb = str[i];
            check = false;
            count++;
        } else if (str[i] < str[i + 1] && !check) count++;
        else {
            if (count > max_count) {
                max_count = count;
                symb_max = symb;
            }
            count = 0;
            check = true;
        }
    }
    cout << symb_max << '\n';
    return 0;
}