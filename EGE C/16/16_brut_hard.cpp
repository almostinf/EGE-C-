#include <iostream>
using namespace std;


int F(int n) {
    if (n > 20) return n * n * n + n;
    else if (n <= 20 && n % 2 == 0) return 3 * F(n + 1) + F(n + 3);
    else if (n <= 20 && n % 2 != 0) return F(n + 2) + 2 * F(n + 3);
}


bool check_for_one(int num) {
    while (num > 0) {
        if (num % 10 == 1) return false;
        num /= 10;
    }
    return true;
}


int main() {
    int count = 0;
    for (int i = 1; i <= 1000; ++i) 
        if (check_for_one(F(i))) count++;
    cout << count << '\n';
    return 0;
}