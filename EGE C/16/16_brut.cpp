#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 3) return n;
    else if (n > 3 && n % 2 == 0) return 2 * n + F(n - 1);
    else if (n > 3 && n % 2 != 0) return n * n + F(n - 2);
}


int main() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) 
        if (!(F(i) % 3)) count++;
    cout << count << '\n';
    return 0;
}