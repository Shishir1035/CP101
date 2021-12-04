///https://codeforces.com/problemset/problem/977/A
#include<iostream>
using namespace std;
int main()
{
    long n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
}
