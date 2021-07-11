#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    ifstream file("26.txt");
    int sum = 0;
    int size, max;
    vector<int> vec;
    file >> size >> max;
    cout << size << ' ' << max << '\n';
    while (!file.eof()) {
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    sort(begin(vec), end(vec));
    cout << vec[0] << '\n';
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum > size) {
            int last = vec[i];
            sum -= vec[i];
            sum -= vec[i - 1];
            cout << sum << '\n';
            bool check = true;
            while (check) {
                for (int j = vec.size() - 1; j > last; j--) {
                    if ((sum + vec[j] <= size) && *find(begin(vec), end(vec), vec[j])) {
                        cout << sum + vec[j] << ' ' << vec[j] << '\n';
                        check = false;
                        break;
                    }
                }
            }
            break;
        }
    }
}

