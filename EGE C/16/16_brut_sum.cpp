#include <iostream>
using namespace std;


int sum = 0;
void F(int n) {
    sum += n + 1;
    if (n > 1) {
        sum += 2 * n;
        F(n - 1);
        F(n - 3);
    }
}


int main() {
    for (int i = 1; i < 1000; ++i) {
        F(i);
        if (sum > 1000000) {
            cout << i << ' ' << sum << '\n';
            break;
        }
        sum = 0;
    }
    return 0;
}