#include<stdio.h>
int main()
{
    int n,m,i,j,k,ans=0;
    scanf("%d",&n);
    if(n/10==0 || n/10>0)
    {
        if(n/10>1 || n%10==0)
        {
            ans=9;
            int se[9]= {11,22,33,44,55,66,77,88,99};
            for(i=9; i<=0; i++)
            {
                if((n/10)==(se[i]/10))
                {
                    ans++;
                }
                ans--;
            }
        }
        else
        {
            ans=n-1;
        }
    }
    else if(n/100==0 || n/100==1)
    {
        printf("aa100\n");
        int se[3];
        ans+=18;
        for(i=9; i<0; i++)
        {
            se[0]=i;
            se[2]=i;
            for(j=9; j<=0; j++)
            {
                se[1]=j;
                m=(se[0]*100)+(se[1]*10)+(se[2]*1);
                if(n-m==1)
                {
                    ans=18;
                }
                else
                {
                    n--;
                }
                ans++;
            }
        }
        if(n%100==0)
        {
            ans=18;
        }
    }
    else if(n/1000==0 || n/1000==1)
    {

    }
    else if(n/10000==0 || n/10000==1)
    {

    }
    else if(n/100000==0 || n/100000==1)
    {

    }
    else if(n/1000000==0 || n/1000000==1)
    {

    }
    printf("%d",ans);
    return 0;
}
