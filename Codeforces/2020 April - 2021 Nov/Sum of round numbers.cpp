// https://codeforces.com/problemset/problem/1352/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'

int power ( int x, int y)
{
    int ans = 1;
    while(y--) ans = ans * x;
    return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, count = 0, i = 0, j=0, arr[20];
		cin>>a;
		while(a)
		{
			if(a % 10 != 0)
				{
					count ++;
					arr[j] = a % 10 * power(10 , i);
					j++;
				}
			a /= 10;
			i++;
		}
		cout<< count << endl;
		for (int j = 0; j < count; j++)
		 	cout<<arr[j]<<" ";
		 cout<<endl;
	}
}