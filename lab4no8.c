#include<stdio.h>
int main()
{
	int n=0,ga=0,gb=0,i=0;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if (a[i] >= 85)
		{
			printf("%d A \n",a[i]);
			ga++;
		}
		else if (a[i] >= 75)
		{
			printf("%d B\n",a[i]);
			gb++;
		}
		else if (a[i] >= 68)
		{
			printf("C to B is : %d\n",75-a[i]);
		}
		else if (a[i] >= 55)
	    {
	    	printf("%d D\n",a[i]);
		}
		else printf("F\n");
	}
}

