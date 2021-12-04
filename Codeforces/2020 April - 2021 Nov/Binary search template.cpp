bool find(long long int x)
{
	int i = 0, j=10000;
	while(i<=j)
    {
        int m=(i+j)/2;
        if(x==arr[m])
            return true;
        if(x>arr[m])
            i=m+1;
        else
            j=m-1;
    }
    return false;
}