#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <set>
#include <list>
#include <vector>
using namespace std;


int main() {
    ifstream file("26_chisla.txt");
    int size;
    list<int> ls;
    vector<int> vec;
    set<int> st;
    vector<int> vec_out;
    int count = 0;
    file >> size;
    while (!file.eof()) {
        int temp;
        file >> temp;
        vec.push_back(temp);
    }
    //cout << vec.size() << '\n';
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[i] % 2 == 0 && vec[j] % 2 == 0) 
                if (binary_search(vec.begin(), vec.end(), (vec[i] + vec[j]) / 2)) {
                    count++;
                    vec_out.push_back((vec[i] + vec[j]) / 2);
                    //st.emplace((vec[i] + vec[j]) / 2);
                }
        }
    }
    
    //for (auto x : vec_out) st.emplace(x);
    cout << count << ' ' << *max_element(vec_out.begin(), vec_out.end()) << '\n';
    //cout << count << ' ' << *max_element(st.begin(), st.end()) << '\n';
    //for (auto x : vec_out) cout << x << '\n';
}