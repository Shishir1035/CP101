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
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==0)
        {
            for(int i=1;i<=n;i+=2)
                cout<<i+1<<" "<<i<<" ";
            cout<<endl;
        }
 
        else
        {
            int a = n-3;
            for(int i=1;i<=a;i+=2)
                cout<<i+1<<" "<<i<<" ";
            cout<<a+2<<" "<<a+3<<" "<<a+1<<endl;
        }
		
	}
}

Nadim lives a spicy life. He also likes spice in foods.
thats why he is used to put a lot of spices on his food. but his friends are not so 
spice lover. they think nadim put too much chillies in food. now nadim wants to make
a food which is tolearabble by all of his friends. Nadim is not a problem solver. so 
he has chosen you to make a program that will tell him to put how much spice he need to
put so that his all friends can survive