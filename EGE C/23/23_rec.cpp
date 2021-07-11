#include <iostream>
using namespace std;


// int F(int start, int end) {
//     if (start == end) return 1;
//     else if (start > end) return 0;
//     else return F(start + 1, end) + F(start * 2, end);
// }


// int F(int start, int end) {
//     if (start == end) return 1;
//     else if (start > end) return 0;
//     else return F(start / 10 % 10 < 9 ? start + 10: start, end) + F(start + 1, end);
// }


// int F(int start, int end) {
//     if (start == end) return 1;
//     else if (start > end) return 0;
//     else return F(start * 2, end) + F(start + 1, end) + F(start * 2 + 1, end) + F(start * 10, end);
// }


int F(int start, int end) {
    if (start == end) return 1;
    else if (start > end || start == 8 || start == 11) return 0;
    else return F(start + 1, end) + F(start + 2, end) + F(start * 3, end);
}


int main() {
    cout << F(2, 5) * F(5, 21);
    //cout << F(2,5) * F(5,8) * F(8,15) когда нужно обязательно пройти через 5 и 8
    return 0;
}