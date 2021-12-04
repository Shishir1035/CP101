#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];
	int tempmax = 1,curmax = 0;
	for (int i = 0; i < n-1; ++i)
	{
		if(v[i] < v[i+1])
			tempmax++;
		else
		{
			curmax = max(curmax,tempmax);
			tempmax = 1; 
		}
	}
	cout<<max(tempmax,curmax)<<endl;
}