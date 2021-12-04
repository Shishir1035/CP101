// https://codeforces.com/problemset/problem/200/B
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
	int n,a;
	double sum = 0;
	cin>>n;
	int temp = n;
	while(temp--)
	{
		cin>>a;
		sum += a;
	}
	cout<<showpoint;
	cout<<fixed;
	cout<<setprecision(12);
	cout<<sum/n<<endl;
}