#include <iostream>
using namespace std;

int F(int start, int end, int step) {
    if (start == end && step == 7) return 1;
    else if (start >= end) return 0;
    else return F(start + 1, end, step + 1) + F(start + 4, end, step + 1) + F(start * 2, end, step + 1);
}
int main() {
    cout << F(3,27,0) << '\n';
}
