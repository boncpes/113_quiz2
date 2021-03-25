#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,p,q,r,i,j,k,h;
    scanf("%d",&m);
    char s[m][70];
    scanf("%d",&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<70; j++)
        {
            s[i][j]='o';
        }
    }
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&p,&q,&r);
        p-=1;
        q-=1;
        for(k=0; k<70; k++)
        {
            if(k==q)
            {
                for(h=k; h<(70-(70-q))+r; h++)
                {
                    s[p][h]='x';
                }
            }
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<70; j++)
        {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
