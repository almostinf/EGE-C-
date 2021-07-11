#include <set>
#include<iostream>
#include<algorithm>
using namespace std;

bool in(set<int> st, int x) {
    for (auto i : st) if (x == i) return true;
    return false;
}
int main() {
    set<int> p ={2,4,9,10,15};
    set<int> q = {3,8,9,10,20};
    set<int> a;
    for (int x = 0; x < 10000; ++x) 
        if (!(!(in(p, x) == in(a, x)) <= (in(q, x) == in(a, x)))) a.emplace(x);
    //sort(a.begin(), a.end());
    for (auto x : a) cout << x << '\n';
}