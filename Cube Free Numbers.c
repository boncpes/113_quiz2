#include<stdio.h>
int cube(int m)
{
    if(m%(2*2*2)==0)
    {
        return 1;
    }
    else if(m%(3*3*3)==0)
    {
        return 1;
    }
    else if(m%(4*4*4)==0)
    {
        return 1;
    }
    else if(m%(5*5*5)==0)
    {
        return 1;
    }
    else if(m%(6*6*6)==0)
    {
        return 1;
    }
    else if(m%(7*7*7)==0)
    {
        return 1;
    }
    else if(m%(8*8*8)==0)
    {
        return 1;
    }
    else if(m%(9*9*9)==0)
    {
        return 1;
    }
    else if(m%(10*10*10)==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int i,j,k,n,c;
    scanf("%d",&n);
    int cf[100000]={0};
    cf[0]=1;
    k=1;
    for(i=2; i<n*n; i++)
    {
        c=cube(i);
        if(c==1)
        {
        }
        else if(c==2)
        {
            cf[k]=i;
            k++;
        }
    }
    printf("%d ",cf[n-1]);
    return 0;
}
