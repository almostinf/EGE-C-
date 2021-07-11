#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

bool in(set<float> st, float x) {
    for (auto i : st) if (x == i) return true;
    return false;
}
int main() {
    set<float> p;
    set<float> q;
    set<float> a;
    for (float i = 100; i <= 290; ++i) p.emplace(i / 10);
    for (float i = 130; i <= 180; ++i) q.emplace(i / 10);
    for (float i = 0; i < 1000; ++i) a.emplace(i / 10);
    for (float x = 0; x < 1000; ++x) 
        if (!((in(a, x / 10) <= in(p, x / 10)) || in(q, x / 10))) a.erase(find(a.begin(), a.end(),x / 10));
    for (auto x : a) cout << x << '\n';
}