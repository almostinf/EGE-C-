#include<iostream>
using namespace std;


int F(int n) {
    if (n == 1) return 1;
    else if (n % 2 == 0) return 3 * F(n - 1);
    else if (n % 2 != 0) return 4 * n + F(n - 2);
}


int main() {
    cout << F(54) << '\n';
    return 0;
}