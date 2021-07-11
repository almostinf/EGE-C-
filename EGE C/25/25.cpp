#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


// int main() {
//     vector<int> vec_del;
//     for (int num = 174457; num <= 174505; ++num) {
//         int count = 0;
//         for (int del = 2; del < num / 2; ++del) {
//             if (num % del == 0) {
//                 count++;
//                 vec_del.push_back(del);
//             }
//         }
//         if (count != 2) {
//             vec_del.clear();
//         }
//         else {
//             //for (auto i : vec_del) cout << vec_del[i] << ' ';
//             for (auto i : vec_del) cout << i << ' ';
//             vec_del.clear();
//             cout << '\n';
//         } 
//     }
//     return 0;
// }


// int main() {
//     vector<int> vec_del;
//     for (int num = 101000000; num <= 102000000; ++num) {
//         int count;
//         int sq = round(sqrt(num));
//         if (num == sq * sq) count = 1;
//         else count = 0;
//         for (int del = 2; del < sq - count; ++del) {
//             if (num % del == 0 && del % 2 == 0) {
//                 count++;
//                 vec_del.push_back(del);
//             }
//             if (count > 3) break;
//         }
//         if (count != 3) {
//             vec_del.clear();
//         }
//         else {
//             for (auto i : vec_del) cout << i << ' ';
//             vec_del.clear();
//             cout << '\n';

//         } 
//     }
//     return 0;
// }



// int main() {
//     // count = 2
//     for (int i = 123456789; i <= 2233456789; ++i) {
//         int count;
//         int del = 1;
//         int d = pow(i, 0.5);
//         if (d * d == i) count = 1;
//         else count = 2;
//         for (int j = 2; j < sqrt(i); ++j) {
//             if (i % j == 0) { 
//                 del = j;
//                 count+=2;
//             }  
//             if (count > 3) break;
//         }
//         if (count == 3) cout << del << ' ' << d << ' ' << i / del << '\n';
//     }
//     return 0;
// }

// bool Isprime(int num) {
//     for (int i = 2; i <= sqrt(num); ++i) 
//         if (num % i == 0) return false;
//     return true;
// }

// int main() {
//     int count_num = 0;
//     for (int i = 278932; i <= 325396; ++i) {
//         int temp;
//         int count = 0;
//         bool check = true;
//         for (int j = 2; j <= sqrt(i) + 1; ++j) {
//             if (Isprime(j) && i % j == 0 && check) {
//                 temp = j;
//                 count++;
//                 check = false;
//             } else if (Isprime(j) && i % j == 0 && !check) 
//                 if (j % 10 == temp % 10) count++;
//             if (count > 3) break;
//         }
//         if (count == 3) count_num++;
//     }
//     cout << count_num << '\n';
//     return 0;
// }


int main() {
    long numdel;
    long maxdel;
    int sqrti;
    for (int i = 123456789; i <= 223456789; ++i) {
        sqrti = pow(i, 0.5);
        numdel = 0;
        if (round(sqrti) == sqrti) {
            maxdel = 1;
            for (int j = 2; j < round(sqrt(i)) - 1; ++i) {
                if (i % j == 0) {
                    if (maxdel == 1) maxdel = i / j;
                    numdel += 2;
                }
            }
        }
        if (numdel == 2) cout << i << ' ' << maxdel << '\n';
    }
    
}