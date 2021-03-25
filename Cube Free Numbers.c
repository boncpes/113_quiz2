#include<stdio.h>
int cube(int m,int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(m%(i*i*i)==0)
        {
            return 1;
        }
    }
    return 2;
}
int main()
{
    int i,j,k,n,c,t,ans=1;
    scanf("%d",&n);
    int cf[100000]= {0};
    cf[0]=1;
    k=1;
    for(i=2;i<n*2;i++)
    {
        c=cube(i,n);
        if(c==1)
        {
        }
        else if(c==2)
        {
            cf[k]=i;
            k++;
        }
    }
    j=1;
    for(i=0;i<n;i++)
    {
        if(n==cf[i])
        {
            printf("%d",i+1);
            j=2;
        }
    }
    if(j==1)
    {
        printf("Not Cube Free");
    }
    return 0;
}
