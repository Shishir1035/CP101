#include<stdio.h>
int main()
{
    int t,n;
    char ch;
    char s1[10010],s2[10010];
    scanf("%d",&t);
    while(t--)
    {
        int i=0,j=0,vow1=0,vow2=0;
        scanf("%d",&n);
        scanf("%s",s1);
        scanf("%s",s2);
        while(s1[i]!='\0')
        {
            if(s1[i]=='a'|| s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u'|| s1[i]=='A'|| s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
            vow1++;
            i++;
        }
        while(s2[j]!='\0')
        {
            if(s2[j]=='a'|| s2[j]=='e'|| s2[j]=='i'|| s2[j]=='o'|| s2[j]=='u'|| s2[j]=='A'|| s2[j]=='E' || s2[j]=='I' || s2[j]=='O' || s2[j]=='U')
            vow2++;
            j++;
        }
        if(vow1>vow2)
            printf("First String\n");
        else if(vow2>vow1)
            printf("Second String\n");
            else if(vow1=vow2)
            printf("Equal\n");

    }
}
