#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int imperfect(string lmao)
{
	int imp = 0, lol = lmao.size();
	for (int i = 0; i < lol-1; ++i)
		if(lmao[i]==lmao[i+1]) imp++;
	return imp;
}
string hehe(string haha)
{
	int lul = haha.size();
	for (int i = 1; i < lul; ++i)
	{
		if(i==lul-1 && haha[i] == '?')
		{
			if(haha[i-1]=='R') haha[i]='B';
			if(haha[i-1]=='B') haha[i]='R';
		}
		if(haha[i]=='?')
		{
			if (haha[i+1]=='B') haha[i]='R';
			if (haha[i+1]=='R') haha[i]='B';
			if (haha[i+1]=='?' && i!=0)
			{
				if (haha[i-1]=='B') haha[i]='R';
				if (haha[i-1]=='R') haha[i]='B';
			}
		}
	}
	return haha;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		int n;
		cin>>n>>str;
		string test1, test2;
		test1 = test2 = str;

		if(str[0]=='?') test1[0]='R';
		test1=hehe(test1);

		if(str[0]=='?') test2[0]='B';
		test2=hehe(test2);

		if(imperfect(test1)<imperfect(test2))
			cout<<test1<<endl;
		else
			cout<<test2<<endl;
	}
}