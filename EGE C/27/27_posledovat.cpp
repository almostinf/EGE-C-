#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <fstream>
using namespace std;


// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(2,0);
//     int count = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i + a) % 2 == 0) count += del[i];
//         del[a % 2]++;
//     }
// }

// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(13,0);
//     int count = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i * a) % 13 == 0) count += del[i];
//         del[a % 13]++;
//     }
// }
// !!! pari chet + %5 == 0 !!! berem % 10 
// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(5,0);
//     int count = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i * a) % 10 == 0 && (i + a) % 2 == 0) count += del[i];
//         del[a % 5]++;
//     }
// }
// troiki
// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(3,0); // количество предыдущих чисел
//     vector<int> pair(3, 0); // количество предыдущих пар
//     int count = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i + a) % 3== 0) count += pair[i];
//         for (int i = 0; i < del.size(); ++i) 
//             pair[(a + i) % 3] += del[i];
//         del[a % 3]++;
//     }
// }
//chetverki
// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(3,0); // количество предыдущих чисел
//     vector<int> pair(3, 0); // количество предыдущих пар
//     vector<int> troiki(3, 0); // количество предыдущих троек
//     int count = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i + a) % 3== 0) count += troiki[i];
//         for (int i = 0; i < del.size(); ++i) 
//             troiki[(a + i) % 3] += pair[i];
//         for (int i = 0; i < del.size(); ++i) 
//             pair[(a + i) % 3] += del[i];
//         del[a % 3]++;
//     }
// }

// int main() {
//     ifstream file("27-A.txt");
//     int size;
//     file >> size;
//     vector<int> del(9,INT_MAX); // минимальные суммы чисел
//     vector<int> pair(9, INT_MAX); // минимальные суммы пар
//     vector<int> troiki(9, INT_MAX); //  минимальные суммы троек
//     int mn = 0;
//     while (!file.eof()) {
//         int a;
//         file >> a;
//         for (int i = 0; i < del.size(); ++i) 
//             if ((i + a) % 9== 0) mn = min(mn,troiki[i]);
//         for (int i = 0; i < del.size(); ++i) 
//             troiki[(a + i) % 9] += min(troiki[(a + i) % 9], pair[i] + a);
//         for (int i = 0; i < del.size(); ++i) 
//             pair[(a + i) % 9] += min(pair[(a + i) % 9], del[i] + a);
//         del[a % 9] = min(del[a % 9], a);
//     }
// }

//всевозможные группы чисел

int main() {
    ifstream file("27-A.txt");
    int size;
    file >> size;
    vector<int> m(25,INT_MIN); 
    int mn = 0;
    while (!file.eof()) {
        int a;
        file >> a;
        vector<int> m_new(25,INT_MIN);
        for (int i = 0; i < 25; ++i) 
            m_new[(a + i) % 25] = max(m_new[(a + i) % 25], a + m[i]);
        m_new[a % 25] = max(m_new[a % 25],a);
        for (int i = 0; i < 25; ++i) m[i] = max(m[i], m_new[i]);
    }
}