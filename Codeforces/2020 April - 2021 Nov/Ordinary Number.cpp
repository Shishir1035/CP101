#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll power (ll x, ll y)
{
   ll ans = 1;
   while(y--) ans = ans * x;
   return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int count;
    cin>>count;
  	for (int cnt = 0; cnt < count; ++cnt)
    {
	    ll n,parini=1;
	    cin>>n;
	    if(n<10)
	    	cout<<n<<endl;
	    else
	    {
	    	ll cownt=0,addition=0;
		    // bool flag=true;
		    while(1)
		    {
		        parini=parini*10;
		        if (parini<=n)
		        	addition+=9;
		        else
		        	break;
		        cownt++;
		    }
		    ll vector[]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
		    ll f=power(10,cownt)+vector[cownt-1];
		   	addition+=(n/f);
		    cout<<addition<<endl;
	    }
	}
}
