#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream file("24_neighbour_razl.txt");
    string str;
    file >> str;
    int counter = 1;
    int max = 0;
    for (int i = 0; i < str.size() - 1; ++i) {
        if (str[i] != str[i + 1]) counter++;
        else {
            if (counter > max) max = counter;
            counter = 1;
        }
    }
    cout << max << '\n';
}