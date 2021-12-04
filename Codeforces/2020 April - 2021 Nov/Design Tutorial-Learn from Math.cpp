///https://codeforces.com/problemset/problem/472/A?fbclid=IwAR0dy2ckXSVFzrPaPT9iTbGdPNF0ZZvIriibo6ll8gUJH5FVqkgneUrZymg
#include<iostream>
#include<cmath>
using namespace std;
int prime(int x)
{
    int i,flag=0;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        flag=1;
    }
    return flag;
}
int main()
{
    int num,a,b;
    cin>>num;
    a=4;
    b=num-a;
    check:
    if(prime(a)==1 && prime(b)==1)
        cout<<a<<" "<<b<<endl;
    else
    {
        a++;
        b--;
        goto check;
    }

}
