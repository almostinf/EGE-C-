#include <iostream>
using namespace std;


int main() {
    for (int A = 1; A < 100; A++) {
        bool check = true;
        for (int x = 1; x < 100; x++) {
            if (!(((x & 35) != 0) <= (((x & 31) == 0) <= ((x & A) != 0)))) {
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