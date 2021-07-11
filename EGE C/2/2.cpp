#include <iostream>
using namespace std;


int main() {
    for (int x = 0; x <= 1; ++x) {
        for (int y = 0; y <= 1; ++y) {
            for (int z = 0; z <= 1; ++z) {
                for (int w = 0; w <= 1; ++w) {
                    if (!((x * !y) + (y == z) + !w)) {
                        cout << x << '\t' << y << '\t' << w << '\t' << z << '\n';
                    }
                }
            }
        }  
    }
    return 0;
}