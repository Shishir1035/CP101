#include<bits/stdc++.h>
using namespace std;
long long int arr[10010];
void initial()
{
	long long int i;
	for (i = 0; i <= 10000; ++i)
		arr[i] = i*i*i;
}
bool find(long long int x)
{
	int i = 1, j=10000;
	while(i<=j)
    {
        int m=(i+j)/2;
        if(x==arr[m])
            return true;
        if(x>arr[m])
            i=m+1;
        else
            j=m-1;
    }
    return false;
}
    
int main()
{
	initial();
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		long long int x;
		cin>>x;
		for (int i = 1; i <= 10000; ++i)
		{
			flag = find(x-arr[i]);
			if(flag) break;
		}
	flag? cout<<"YES\n" : cout<<"NO\n";
	}
}