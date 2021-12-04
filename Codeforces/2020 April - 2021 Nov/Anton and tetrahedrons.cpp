// https://codeforces.com/problemset/problem/785/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	ll n,face = 0;
	string s;
	cin >> n;
	while(n--)
	{
		cin >> s;
		if(s == "Tetrahedron")
			face += 4;
		if(s == "Cube")
			face += 6;
		if(s == "Octahedron")
			face += 8;
		if(s == "Dodecahedron")
			face += 12;
		if(s == "Icosahedron")
			face += 20;
 	}
 	cout << face << endl;
}
