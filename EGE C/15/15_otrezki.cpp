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
	for (int i = 1; i < 1000; ++i) A.push_back(i);
	vector<int> B;
	vector<int> C;
	for (int i = 44; i <= 49; ++i) B.push_back(i); 
	for (int i = 28; i <= 53; ++i) C.push_back(i);
	for (int x = 1; x < 1000; ++x) {
		if (!(in(A, x) <= (in(B, x) || in(C, x)))) A.erase(find(A.begin(), A.end(), x));
	}
	cout << A.size() << '\n';
}