#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


bool in(set<int> st, int x) {
    for (auto i : st) if (i == x) return true;
    return false;
}
int main() {
    set<int> p = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    set<int> q = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    set<int> a;
    for (int i = 0; i < 1000; ++i) a.emplace(i);
    for (int x = 0; x <1000; ++x) 
        if (!((in(a, x) <= in(p, x)) || (!in(q, x) <= !in(a, x)))) a.erase(find(a.begin(), a.end(), x));
    cout << a.size() << '\n';
}