#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n, j=0, cnt=0, i=0, k=1;
	cin>>n;
	char str[100],ans[100];
	cin>>str;
	if (n==1)
	{
		cout<<str<<endl;
		return 0;
	}
	while(cnt<n)
		{
			ans[j++]=str[i + cnt];
			cnt+=k, k++;
		}
	ans[j]='\0';
	for (int i = 0; i < strlen(ans); ++i)
	 	cout<<ans[i];
	 cout<<endl;
}