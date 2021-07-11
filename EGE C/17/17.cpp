#include <iostream>
using namespace std;


int main() {
    int count = 0;
    int sum = 0;
    for (int i = 2244; i <= 7722; ++i) {
        if (i % 17 == 0 && i % 45 > 40) {
            count++;
            sum += i;
        }

    }
    cout << sum << ' ' << count << '\n';
    return 0;
}