#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    ifstream file("24_max_symb_Z.txt");
    string str;
    file >> str;
    int count_Z = 0;
    int count_symb = 0;
    int max_count = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'Z') {
            count_Z++;
            count_symb++;
            if (count_Z > 2) {
                if (count_symb > max_count) max_count = count_symb;
                count_symb = 0;
                count_Z = 0;
            }
        } else count_symb++;
    }
    cout << max_count << '\n';
    return 0;
}