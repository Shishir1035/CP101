#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long year,month1,date1,month2,date2,l1,l2;
    char day1[8][20],day2[8][20];
    cin>>year;
    if((year%4==0&&year%100!=0)||(year%400==0))
        leap=1;
    else
        leap=0;
    cout<<"given date and day : ";
    cin>>date1>>month1>>day1;
    for(i=1; i<month1; i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            l1+=31;
        if(i==4||i==6||i==9||i==11)
            l1+=30;
        else if(i==2)
            l1+=28+leap;
    }
    l1+=date1;

    for(i=1; i<month2; i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            l2+=31;
        if(i==4||i==6||i==9||i==11)
            l2+=30;
        else if(i==2)
            l2+=28+leap;
    }
    l2+=date2;
    long det = l2-l1;

}
}
