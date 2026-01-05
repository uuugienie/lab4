#include<stdio.h>
int main()
{
	int n=0,j=0,i=0,k=0;
	int a[50];
    
    do
    {
		scanf("%d",&i);
		
		a[j] = i;
		j++;
		
	}while(i!=-1);
	
		printf("\n");
	
	for(int k=0;k<j-1;k++)
	{
		if (a[k] >= 85)
		{
			printf("%d A \n",a[k]);
		}
		else if (a[k] >= 75)
		{
			printf("%d B\n",a[k]);
		}
		else if (a[k] >= 68)
		{
			printf("%d C\n",a[k]);
		}
		else if (a[k] >= 55)
	    {
	    	printf("%d D\n",a[k]);
		}
		else printf("%d F\n",a[k]);
	}
}
