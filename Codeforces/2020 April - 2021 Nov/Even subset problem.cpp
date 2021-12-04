#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,arr[110];
	cin>>t;
	while(t--)
	{
		int n,e=0,o[2],k=0,even=0,odd=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i]=a;
			if(a%2==0 && even<1)
			{	
				e=i+1;
				even++;
			}
			else if(a%2 && odd<2)
			{	
				o[k++]=i+1;
				odd++;
			}
		}
		if(e)
			cout<<1<<endl<<e<<endl;
		else if(odd>=2)
			cout<<2<<endl<<o[0]<<" "<<o[1]<<endl;
		else
			cout<<-1<<endl;
	}
}