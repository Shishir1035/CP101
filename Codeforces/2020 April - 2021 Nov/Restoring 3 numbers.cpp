// https://codeforces.com/problemset/problem/1154/A
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
	int d,e,f,g;
	cin>>d>>e>>f>>g;
	int m = max(max(max(d,e),f),g);
	int a,b,c;
	if(m==d)
		cout<<(e+f-g) / 2<<" "<<(f+g-e) / 2<<" "<<(g+e-f) / 2<<endl;
	if(m==e)
		cout<<(f+g-d) / 2<<" "<<(g+d-f) / 2<<" "<<(d+f-g) / 2<<endl;
	if(m==f)
		cout<<(g+d-e) / 2<<" "<<(d+e-g) / 2<<" "<<(e+g-d) / 2<<endl;
	if(m==g)
		cout<<(d+e-f) / 2<<" "<<(e+f-d) / 2<<" "<<(f+d-e) / 2<<endl;
} 