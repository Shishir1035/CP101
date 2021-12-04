#include<iostream>
using namespace std;
int main()
{
	int count;
	int ans;

	cin>>count;
	for (int l = 0; l < count; ++l)
	{
		int n,array[150];
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int b; cin>>b; array[i]=b;
		}
	
		for (int i = 0; i < n-2; ++i)
		{
			if(array[i]!=array[i+1] && array[i+1]!=array[i+2] && array[i]==array[i+2])
				{
					ans=i+2;
					break;
				}
			else if(array[i]!=array[i+1] && array[i+1]==array[i+2] && array[i]!=array[i+2])
				{
					ans=i+1;
					break;
				}
			else if(array[i]==array[i+1] && array[i+1]!=array[i+2] && array[i]!=array[i+2])
				{
					ans=i+3;
					break;
				}
		}
		cout<<ans<<'\n';
	}
}