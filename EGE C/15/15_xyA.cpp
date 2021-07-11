#include <iostream>
using namespace std;

// 1
// int main() {
//     for (int A = 2; A < 1000; ++A) {
//         bool check = true;
//         for (int x = 1; x < 1000; ++x) 
//             for (int y = 1; y < 1000; ++y) 
//                 if (!((x >= 19) || (x < 5 * y) || (x * y < 2 * A))) check = false;
                    
//         if (check) {
//             cout << A << '\n';
//             break;
//         }   
//     }
//     return 0;
// }


int main() {
    int count = 0;
    for (int A = 1; A < 1000; ++A) {
        bool check = true;
        for (int x = 1; x < 1000; ++x) 
            for (int y = 1; y < 1000; ++y) 
                if (((x >= 12) && (x * x + 6 * x < A) || (y * y + 4 * y >= A) && (y <= 4))) check = false;   
        if (check) {
            count++;
        }   
    }
    cout << count << '\n';
    return 0;
}