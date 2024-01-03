#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	int s12,s23,s31;
	printf("Enter the first point = ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the second point = ");
	scanf("%d %d",&x2,&y2);
	printf("Enter the third point = ");
	scanf("%d %d",&x3,&y3);
	s12=fabs(x2-x1) / fabs(y2-y1);
	s23=fabs(x3-x2) / fabs(y3-y2);
	s31=fabs(x3-x1) / fabs(y3-y1);
	if (s12 == s23 && s23 == s31)
		{
			printf("Three points are collinear");
		}
	else
		{
			printf("Three points are non-colinear");
		}
		printf("\n23DCE036 - HARSH GOSWAMI");
	return 0;
}
