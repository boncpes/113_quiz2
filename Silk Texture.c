#include<stdio.h>
int main()
{
    int m,n,p,q,r,i,j,k;
    scanf("%d",&m);
    char s[m][70];
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {
            s[p][j]='o';
        }
    }
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        printf("%s\n",s[i]);
    }
    return 0;
}
