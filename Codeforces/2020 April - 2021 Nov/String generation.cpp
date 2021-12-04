#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	srand('a');
	int t;
	cin>>t;
	while(t--)
	{
		 ll n,k;
		 cin>>n>>k;
		 int i=1;
		 while(i<=n)
		 {
		 	if(i%3==1)
		 		{
		 			cout<<'a'; i++; continue;
		 		}
		 	if(i%3==2)
		 		{
		 			cout<<'b'; i++; continue;
		 		}
		 	if(i%3==0)
		 		{
		 			cout<<'c'; i++; continue;
		 		}
		 }
		 cout<<endl;
	}
}