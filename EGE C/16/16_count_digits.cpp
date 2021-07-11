#include <iostream>
using namespace std;


int F(int n) {
    if (n < 3) return n + 1;
    else if (n >= 3 && n % 2 == 0) return F(n - 2) + n - 2;
    else if (n >= 3 && n % 2 != 0) return -10000000;
}

bool counter_of_digits(int num) {
    int counter = 0;
    while (num > 0) {
        counter++;
        num /= 10;
    }
    if (counter == 5) return true;
    else return false;
}
int main() {
    int count = 0;
    for (int i = 1; i < 10000; ++i) 
        if (counter_of_digits(F(i))) count++;
    cout << count << '\n';
    return 0;
}