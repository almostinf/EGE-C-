#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// int main() {
//     string str;
//     int count = 0;
//     int maxcount = 0;
//     ifstream file("24_demo.txt");
//     getline(file, str);
//     for (int i = 0; i < str.size() - 3; i+=3) {
//         if (str[i] == 'X' && str[i+1] == 'Y' && str[i+2] == 'Z') {
//             count+=3;
//             if (count > maxcount)
//                 maxcount = count;
//         } else if (str[i] == 'X') count = 1;
//         else count = 0;
//     }
//     cout << maxcount << '\n';
//     file.close();
//     return 0;
// }

// int main() {
//     string str;
//     int count = 0;
//     int maxcount = 0;
//     ifstream file("24_demo.txt");
//     getline(file, str);
//     for (int i = 0; i < str.size() - 3; i+=1) {
//         if ((str[i] == 'X' && count % 3 == 0) || (str[i] == 'Y' && count % 3 == 1) || (str[i] == 'Z' && count % 3 == 2)) {
//             count++;
//             if (count > maxcount)
//                 maxcount = count;
//         } else if (str[i] == 'X') count = 1;
//         else count = 0;
//     }
//     cout << maxcount << '\n';
//     file.close();
//     return 0;
// }


int main() {
    string str;
    int count = 1;
    int maxcount = 1;
    ifstream file("24_2.txt");
    getline(file, str);
    for (int i = 1; i < str.size() - 1; i++) {
        if (str[i] != str[i - 1]) {
            count++;
            if (count > maxcount) maxcount = count;
        } else count = 1;
    }
    cout << maxcount << '\n';
    file.close();
    return 0;
}