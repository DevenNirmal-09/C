#include <stdio.h>
int main()
{
	int n,i,j,k,l;
	char ch='A';
	printf("Enter a number ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
    {
        l=n;
		for (;l>i;l--)
		{
			printf("  ");
		}
		for (k=0;k<2*i+1; k++)
        {
			printf("%c ",ch);
			ch++;
		}
		ch='A';
		printf("\n");
	}
	printf("Created by 23CE079");
	return 0;
}
