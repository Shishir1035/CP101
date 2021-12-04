#include <iostream>
#include <vector>
using namespace std;
int LCM (int a,int b)
{
    int lcm;
    if(a>b)
        lcm = a;
    else
        lcm = b;
    while(1)
    {
        if( lcm%a==0 && lcm%b==0 )
        {
            break;
        }
        lcm++;
    }
    return lcm;
}
int main ()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int lcm=LCM(l,r);
        bool f=false;
        for(int i=1; i<=lcm; i++)
            if(l%i>=i*.5&&r%i>=i*.5)
            {
                f=true;
                break;
            }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

