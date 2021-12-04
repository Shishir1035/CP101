#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],ch;
    int i=0,small=0,cap=0;
    scanf("%s",&s);
    while(s[i]!='\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            small++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            cap++;
        i++;
    }
    if(cap>small)
        printf("%s\n",strupr(s));
    else if(cap<small)
        printf("%s\n",strlwr(s));
    else if(cap==small)
        printf("%s\n",strlwr(s));
}

