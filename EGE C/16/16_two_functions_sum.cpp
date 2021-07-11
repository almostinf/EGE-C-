#include <iostream>
using namespace std;

int G(int n);
int F(int n) {
    if (n == 1) return 1;
    else if (n > 1) return 2 * F(n - 1) - 3 * G(n - 1);
}

int G(int n) {
    if (n == 1) return 1;
    else if (n > 1) return F(n - 1) + G(n - 1) + 2 * n;
}


int main() {
    int num = G(11);
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << sum << '\n';
    return 0;
}