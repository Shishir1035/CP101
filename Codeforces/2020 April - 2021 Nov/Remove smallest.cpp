#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        int flag=1;
        cin>>n;
        vector<int>num(n);
        for(i=0; i<n; i++)
            cin>>num[i];
        sort(num.begin(),num.end());
        for(i=0; i<n-1; i++)
        {
            if(abs(num[i]-num[i+1])>1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int t,n,num[1010],i;
//    cin>>t;
//    while(t--)
//    {
//        int flag=1;
//        cin>>n;
//        if(n==1)cout<<"YES"<<endl;
//        else{
//
//        for(i=0; i<n; i++)
//            cin>>num[i];
//        sort(num,num+n);
//        for(i=0; i<n-1; i++)
//        {
//            if(abs(num[i]-num[i+1])>1)
//            {
//                flag=0;
//                break;
//            }
//        }
//        if(flag)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//        }
//    }
//}

