#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,str3,str2="a",x,y;
        int cnt=0;
        cin >> str;
        string p=str+str2;
        x=p;

        reverse(p.begin(),p.end());

        string q=str2+str;

        y=q;
        reverse(q.begin(),q.end());
        str3=str;

        for(int i=0; i<str.size(); i++)
            if(str[i]=='a') 
                cnt++;

        reverse(str.begin(),str.end());
        if((str.size()==1 && str[0]=='a') || cnt==str.size()) 
            cout<<"NO"<<endl;
        else if(str==str3) 
        {
                cout<<"YES"<<endl;
                str+=str2;
                cout<<str<<endl;
        }
        else
        {

                 if(p!=x)
                {
                       cout<<"YES"<<endl;
                        cout<<x<<endl;
                }
                else if(q!=y) {
                        cout<<"YES"<<endl;
                        cout<<y<<endl;
                }
                else cout<<"NO"<<endl;
        }
    }
}