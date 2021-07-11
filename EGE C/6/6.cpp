#include <iostream>
using namespace std;


int main() {
    for (int d = 1; d < 1000; ++d) {
        int s = 0;
        int n = 3;
        while (s <= 1111) {
            s += d;
            n += 8;
        }
        if (n == 75) cout << d << '\n';
    }
    return 0;
}