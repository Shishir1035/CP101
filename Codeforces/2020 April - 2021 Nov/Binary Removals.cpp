#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int i = s.find("11");
    int j = s.rfind("00");
    if(i != -1 && j != -1 && i < j)
    	cout<<"NO"<< endl;
    else
    	cout<<"YES"<<endl;
  }
}