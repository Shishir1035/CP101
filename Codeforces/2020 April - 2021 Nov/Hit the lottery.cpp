// https://codeforces.com/problemset/problem/996/A
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
	int t, note = 0;
	cin>>t;
	note += t / 100;
	t %= 100;
	note += t / 20;
	t %= 20;
	note += t / 10;
	t %= 10;
	note += t / 5;
	t %= 5;
	note += t / 1;
	cout<< note << endl;
}
