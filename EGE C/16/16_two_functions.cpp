#include <iostream>
using namespace std;

int G(int n);
int F(int n) {
    if (n == 1) return 1;
    else if (n > 1) return 3 * F(n - 1) + G(n - 1) - 2 * n;
}

int G(int n) {
    if (n == 1) return 1;
    else if (n > 1) return F(n - 1) + 2 * G(n - 1) + 5;
}


int main() {
    cout << F(16) + G(16) << '\n';
    return 0;
}