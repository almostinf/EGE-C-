#include <iostream>
#include <cmath>
using namespace std;

// переборное решение
int main() {
    for (int d = 1; d <= 32; ++d) 
        if ((1024.0 * 768 * d + 1280 * 1024 * 8) * 2048.0 <= (1024.0 * 1024 * 1024 * 32))
            cout << d << ' ' << pow(2, d) << '\n';
    return 0;
}


// еще всегда стоит помнить про пропорции в соответствующих задачах