#include<stdio.h>
int main()
{
	int c=0,r=0,i=0,j=0;
	char s;
	scanf("%c %d %d",&s,&c,&r);
 
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%c",s);
		}
		printf("\n");
	}
}
