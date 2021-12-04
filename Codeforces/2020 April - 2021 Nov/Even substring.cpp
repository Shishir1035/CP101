// https://codeforces.com/problemset/problem/1139/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int arr[70000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t,count=0;
	cin>>t;
	string str;
	cin>>str;
	for (int i = str.size()-1 ; i >= 0; --i)
		{
			if(str[i]=='2' || str[i]=='4' || str[i]=='6' || str[i]=='8')
			{
				arr[i]= ++count;
				continue;
			}
			arr[i]=count;
		}
	int sum=0;
	for (int i = 0; i < str.size(); ++i)
		sum+=arr[i];
	cout<<sum<<endl;		
}