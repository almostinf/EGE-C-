#include<iostream>
using namespace std;


int counter = 0;

void F(int n) { 
    counter++;
    if (n >= 1) {
        counter++;
        F(n - 1);
        F(n - 2);
        counter++;
    }
}

void F1(int n) { 
    counter++;
    if (n >= 1) {
        counter++;
        F1(n - 1);
        F1(n / 3);
        counter++;
    }
}


int main() {
    F1(280);
    cout << counter << '\n';
    return 0;
}