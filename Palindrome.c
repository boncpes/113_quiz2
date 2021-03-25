#include<stdio.h>
int main()
{
    int n,m=0,i,j,k,ans=0;
    scanf("%d",n);
    m=0;
    j=0;
    for(i=1; i<=9; i++)
    {
        if((n/10)==i)
        {
            ans=18;
        }
        m=i*100;
        m+=j*10;
        m+=i;
        ans++;
        if(i==9)
        {
            j++;
            i=1;
            if(j==10)
            {
                break;
            }
        }
    }
    return 0;
}
