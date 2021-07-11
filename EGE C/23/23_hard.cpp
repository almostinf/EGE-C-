#include <iostream>
using namespace std;


int F(int start, int end, int step) {
    if (start == end && step == 7) return 1;
    else if (start >= end) return 0;
    else return F(start + 1, end, step + 1) + F(start + 5, end, step + 1) + F(start * 3, end, step + 1);
}

int main() {
    int count = 0;
    for (int i = 2; i < 60; ++i) {
        count += F(1, i, 0);
    }
    cout << count << '\n';
}