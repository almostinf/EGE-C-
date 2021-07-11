#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ifstream file("26_gruzi.txt");
    vector<int> vec;
    vector<int> gruzi(10);
    int num, gruzopod;
    int allsum = 0;
    int counter = 0;
    file >> num >> gruzopod;
    cout << num << ' ' << gruzopod << '\n';
    while (!file.eof()) {
        int height;
        file >> height;
        if (height >= 220 || height <= 210) vec.push_back(height);
        else {
            allsum += height;
            counter++;
        }
    }
    int bound;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        allsum += vec[i];
        counter++;
        if (allsum > gruzopod) {
            bound = i;
            counter--;
            allsum -= vec[i];
            int ostatok = gruzopod - allsum;
            cout << "Ne hvataet: " << ostatok << '\n';
            for (int i = 0; i < bound; ++i) 
                for (int j = 0; j < vec.size(); ++j) 
                    if (abs(i - j) == ostatok && i % 10 == j % 10) gruzi[i % 10] = i;
            cout << "Chisla c raznicei 120: ";
            for (auto i : gruzi) cout << i << ' ' << *find(vec.begin(), vec.end(), i + ostatok) << '\n';
            // esli bi takih chisel ne bilo, nado bilo bi umenshat' ostotok na 1 do teh por, poka para chisel ne bila bi naidena
            cout << "Otvet: " << allsum - gruzi[3] + 223 << ' ' << counter << '\n';
            break;
        }
    }
    return 0;
}