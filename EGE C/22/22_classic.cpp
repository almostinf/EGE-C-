#include <iostream>
using namespace std;


// int main() {
//     for (int x = 10001; x > 0; --x) {
//         int m = 0, l = 0;
//         int xx = x;
//         while (xx > 0) {
//             m += 1;
//             if (xx % 2 != 0) l += xx % 8;
//             xx /= 8;
//         }
//         if (l == 2 && m == 3) {
//             cout << x << '\n';
//             break;
//         }
//     }
//     return 0;
// }


int main() {
    for (int x = 1; x <= 999; ++x) {
        int m = 0, l = 0, xx = x;
        while (xx > 0) {
            l += 1;
            if (xx % 2 == 0) m += (xx % 10) / 2;
            xx /= 10;
        }
        if (l == 3 && m == 7) cout << x << '\n';
    }
    return 0;
}