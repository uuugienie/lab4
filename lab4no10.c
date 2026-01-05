#include<stdio.h>
int main()
{
	int n=0,j=0,i=0,k=0,ga=0,gb=0,gc=0,gd=0,gf=0;
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
			ga++;
		}
		else if (a[k] >= 75)
		{
			printf("%d B\n",a[k]);
			gb++;
		}
		else if (a[k] >= 68)
		{
			printf("%d C\n",a[k]);
			gc++;
		}
		else if (a[k] >= 55)
	    {
	    	printf("%d D\n",a[k]);
	    	gd++;
		}
		else if(a[k] < 55)
	    {
	    	printf("%d F\n",a[k]);
		    gf++;
		}
	}
	
	printf("A(%d)\n",ga);
	printf("B(%d)\n",gb);
	printf("C(%d)\n",gc);
	printf("D(%d)\n",gd);
	printf("F(%d)\n",gf);
}
