#include <iostream>
using namespace std;

// del

bool del(int x, int A) { return x % A == 0; }
int main() {
    for (int A = 1; A < 1000; ++A) {
        bool check = true;
        for (int x = 1; x < 1000; ++x) {
            if (!((del(x, A) && del(x, 21)) <= del(x, 18))) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << A << '\n';
            break;
        }
    }
    return 0;
}