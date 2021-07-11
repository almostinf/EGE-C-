#include <iostream>
using namespace std;


int main() {
    for (int x0 = 0; x0 < 10000; ++x0) {
        int x = x0;
        int q = 10;
        int l = 0;
        int m;
        while (x >= q) {
            l++;
            x -= q;
        }
        m = x;
        if (m < l) {
            m = l;
            l = x;
        }
        if (l == 3 && m == 6) cout << x0 << '\n';
    }
    return 0;
}