#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream file("24_max_similar_sub.txt");
    string str;
    file >> str;
    int counter = 1;
    int max = 1;
    char symb = ' ';
    char temp = ' ';
    bool check = true;
    for (int i = 0; i < (str.size() - 1); ++i) {
        if (str[i] == str[i + 1]) {
            if (check) {
                temp = str[i];
                check = false;
            }
            counter++;
        }
        else {
            if (counter > max) {
                max = counter;
                symb = temp;
            }
            check = true;
            counter = 1;
        }
    }
    cout << symb << ' ' << max << '\n';
}

