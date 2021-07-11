#include <iostream>
#include <string>
using namespace std;



int main() {
    string str(72, '5');
    while (str.find("333") != string::npos || str.find("555") != string::npos) {
        if (str.find("555") != string::npos) str.replace(str.find("555"), 3, "3");
        else str.replace(str.find("333"), 3, "5");
    }
    cout << str << '\n';
    return 0;
}