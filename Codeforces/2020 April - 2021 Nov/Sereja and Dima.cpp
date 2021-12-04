// https://codeforces.com/problemset/problem/381/A
#include<bits/stdc++.h>
#include<deque>
using namespace std;
#define ll long long
#define print(x) printf("%d\n",x)
int main()
{
	int t;
	cin>>t;
	deque<int>mydeque;
	for (int i = 0; i < t; ++i)
	{
		int a;
		cin>>a;
		mydeque.push_back(a);
	}

	int j = 1,sereja = 0, dima = 0;
	while(mydeque.empty() != 1)
	{
		if(j)
		{
			int maxx = max(mydeque.front(),mydeque.back()) ;
			if(maxx == mydeque.front()){
					sereja += mydeque.front();
					mydeque.pop_front();
				}
			else if(maxx == mydeque.back()){
					sereja += mydeque.back();
					mydeque.pop_back();
				}
				j=0;
		}

		else if(j==0)
		{
			int maxx = max(mydeque.front(),mydeque.back()) ;

			if(maxx == mydeque.front())
				{
					dima += mydeque.front();
					mydeque.pop_front(); 
				}

			else if(maxx == mydeque.back())
				{
					dima += mydeque.back();
					mydeque.pop_back();
				}
				j=1;
		}
	}
	cout<<sereja<<" "<<dima<<endl;
}