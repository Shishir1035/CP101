// https://codeforces.com/problemset/problem/155/A
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
	int t, arr[10010];
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			int a;
			cin>>a;
			arr[i] = a;
		}
	int max = arr[0];
	int min = arr[0];
	int amaz = 0;
	for(int i = 1; i < t; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];
				amaz++;
			}
			if(arr[i] < min)
			{
				min = arr[i];
				amaz++;
			}
		}
	cout<< amaz <<endl;
}