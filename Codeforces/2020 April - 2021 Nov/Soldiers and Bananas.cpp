///https://codeforces.com/problemset/problem/546/A
#include<iostream>
using namespace std;
int main()
{
   long k,n,w;
   cin>>k>>n>>w;
   long ans=(k*w*(w+1)/2)-n;
   if(ans>=0)
   cout<<ans<<endl;
   else
    cout<<"0"<<endl;
}
