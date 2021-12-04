///https://codeforces.com/problemset/problem/110/A
#include<iostream>
using namespace std;
int main()
{
    unsigned long long n;
    int rem,flag=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        if(rem==4||rem==7)
        {
            flag++;
        }
    }
    if(flag==4||flag==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
