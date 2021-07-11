#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

string base(int a, int cc) {
    string str;
    while (a > 0) {
        str += to_string(a % cc);
        a /= cc;
    }
    reverse(str.begin(), str.end());
    return str;
}
int main() {
    for (int n = 10; n < 1000; ++n) {
        int n1 = n;
        n1 -= (n1 % 4);
        string str1 = base(n1, 2);;
        int sum = 0;
        for (auto i : str1) sum += int(i);
        str1 += to_string(sum % 2);
        sum = 0;
        for (auto i : str1) sum += int(i);
        str1 += to_string(sum % 2);
        int a = stoi(str1, 0, 2);
        if (a > 56) {
            cout << a << '\n';
            break;
        } 
    }
}


