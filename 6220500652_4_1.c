#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x[n][3],y[n-2],z[3]={4,2,1};
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
   for (i=0;i<n-2;i++)
    {
        y[i]=0;
        for (j=0;j<3;j++)
        {
            y[i]+=(x[i][j]+x[i+1][j]+x[i+2][j])*z[j];
        }
    }
    int max=0,min=0;
    for (i=1;i<n-2;i++)
    {
        if(y[i]>y[max])
        {
            max=i;
        }
        else if(y[i]<y[min])
        {
            min=i;
        }
    }
    printf("%d %d",max+1,min+1);
}
