#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864};
int dig(int n)
{
	int res=0;
	while(n>>1)
	{
		res++;
		n>>=1;
	}
	return res;
}
// int power ( int x, int y)
// {
//     int ans = 1;
//     while(y--) ans = ans * x;
//     return ans;
// }
int build(int digit)
{
	int ans=1;
	while(digit--)
	{
		ans<<=1;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		// cout<<dig(n)<<" ";
		int digit=dig(n);
		cout<<build(digit)-1<<endl;
	}
}