// https://codeforces.com/problemset/problem/1328/A
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long jc., cg3yy
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll a,b;
// 		cin>>a>>b;
// 		ll temp = a;
// 		while(a % b != 0)
// 			a++;
// 		cout<< a - temp <<endl;
// 	}
// }

//Accepted
#include<stdio.h>
#define ll long long
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll a,b;
		scanf("%lld %lld",&a,&b);
		if(a<=b)
			printf("%lld\n", b-a);
		else if(a % b == 0)
			printf("0\n");
		else
			printf("%lld\n",b-((a-b) % b) );
	}
}