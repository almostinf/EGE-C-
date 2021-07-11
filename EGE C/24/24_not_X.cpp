#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream file("24_not_X.txt");
    string str;
    file >> str;
    int counter = 0;
    int max = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != 'X') counter++;
        else {
            if (counter > max) max = counter;
            counter = 0;
        }
    }
    cout << max << '\n';
}