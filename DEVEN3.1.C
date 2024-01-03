#include<stdio.h>
#include<conio.h>
#include<Math.h>
#define PI 3.14
int main()
{
	float L,G,T;
	printf("Enter length of pendulam = ");
	scanf("%f",&L);
	printf("Entet gravity = ");
	scanf("%f",&G);
	T = 2*3.14*sqrt(L/G);
	printf("Time = %.2f",T);
    printf("\n23DCE036 - HARSH GOSWAMI");
	return 0;
}
