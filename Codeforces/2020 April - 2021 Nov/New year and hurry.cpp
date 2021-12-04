// https://codeforces.com/problemset/problem/750/A
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
	int n,k,count = 0;
	cin>>n>>k;
	int temp = 240 - k;
	if(temp - 5 >= 0)
		{
			count++;
			temp -= 5;
		}
	if(temp - 10 >= 0)
		{
			count++;
			temp -= 10;
		}
	if(temp - 15 >= 0)
		{
			count++;
			temp -= 15;
		}
	if(temp - 20 >= 0)
		{
			count++;
			temp -= 20;
		}
	if(temp - 25 >= 0)
		{
			count++;
			temp -= 25;
		}
	if(temp - 30 >= 0)
		{
			count++;
			temp -= 30;
		}
	if(temp - 35 >= 0)
		{
			count++;
			temp -= 35;
		}
	if(temp - 40 >= 0)
		{
			count++;
			temp -= 40;
		}
	if(temp - 45 >= 0)
		{
			count++;
			temp -= 45;
		}
	if(temp - 50 >= 0)
		{
			count++;
			temp -= 50;
		}
	if(n<count)
		cout<<n<<endl;
	else
		cout<<count<<endl;
}