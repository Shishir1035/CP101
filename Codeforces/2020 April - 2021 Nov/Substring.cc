#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>str;
        if(n<4)
            cout<<"NO"<<endl;
        else
        {
        if(str.compare("2020")==0)
            cout<<"YES"<<endl;
        else if(str[0]=='2' && str[n-1]=='0' && str[n-2]=='2'&& str[n-3]=='0') //2 020
            cout<<"YES"<<endl;
        else if(str[0]=='2' && str[1]=='0' && str[n-1]=='0' && str[n-2]=='2') //20 20
            cout<<"YES"<<endl;
        else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[n-1]=='0') //202 0
            cout<<"YES"<<endl;
        else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[3]=='0') //202 0
            cout<<"YES"<<endl;
        else if(str[n-4]=='2' && str[n-3]=='0' && str[n-2]=='2' && str[n-1]=='0') //202 0
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}

