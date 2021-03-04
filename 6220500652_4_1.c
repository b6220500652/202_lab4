#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char x[200];
	scanf("%s",&x);
	n=strlen(x);
	for(i=0;i<n;i++)
    {
       if(x[i]==x[i+1])
       {
           continue;
       }
       else if(x[i]!=x[i+1])
       {
           printf("%c",x[i]);
       }
    }	
}
