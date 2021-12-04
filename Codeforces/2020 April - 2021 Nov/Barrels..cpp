///https://codeforces.com/problemset/problem/1430/B
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long bar[n];
        for(i=0;i<n;i++)
        {
            cin>>bar[i];
        }
        sort(bar,bar+n);n--;
        long long maxx=bar[n];
        for(i=0;i<k;i++)
        {
            n--;
            maxx+=bar[n];
        }
        cout<<maxx<<endl;
    }
}
