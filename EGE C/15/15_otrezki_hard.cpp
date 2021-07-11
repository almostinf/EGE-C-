#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool in(vector<int> vec, int x) {
	for (int i = vec.front(); i <= vec.back(); ++i) {
		if (i == x) return true;
	}
	return false;
}

int main() {
	vector<int> A;
	for (int i = 80; i < 91; ++i) A.push_back(i);
	vector<int> B;
	vector<int> C;
	for (int i = 30; i <= 50; ++i) B.push_back(i);
	for (int n = 11; n < 100; ++n) {
		for (int i = 10; i <= n; ++i) C.push_back(i);
		int count = 0;
		for (int x = 1; x < 1000; ++x) {
			if (((!(in(A, x))) <= in(B, x)) && ((!(in(C, x))) <= in(A, x))) count++;
		}
		if (count > 25) {
			cout << n << '\n';
			break;
		}
	}
}