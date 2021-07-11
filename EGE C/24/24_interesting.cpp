#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
ifstream f;
string s;
f.open("путь к файлу");
while (!f.eof())
{
f >> s;
}
int k = 0;
string c1 = "ADF";
string c2 = "CDF";
string c3 = "CDF";
int i;
for (i = 0; i <= s.length()-2; i++)
{
if ((c1.find(s[i]) != string::npos) && (c2.find(s[i + 1]) != string::npos) && (c3.find(s[i + 2]) != string::npos)
&& (s[i] != s[i + 2]) && (s[i + 1] != s[i + 2])) k ++;
}
cout << k;
}