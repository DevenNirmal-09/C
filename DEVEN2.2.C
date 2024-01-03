#include<stdio.h>
int main()
{
	float BS,DA,HRA,MA,TA,PF,IT,GS,NS;
	printf("Enter Basic Salary = ");
	scanf("%f",&BS);
	printf("\nAllowances:");
	DA = BS*0.70;
	printf("\nDA = %f",DA);
	HRA = BS*0.07;
	printf("\nHRA = %f",HRA);
	MA = BS*0.02;
	printf("\nMA = %f",MA);
	TA = BS*0.04;
	printf("\nTA = %f",TA);
	printf("\n\nDeduction:");
	PF = BS*0.12;
	printf("\nPF = %f",PF);
	printf("\nIT = ");
	scanf("%f",&IT);
	GS = BS+DA+HRA+MA+TA;
	printf("\nGross Salary = %f",GS);
    NS = GS-(PF+IT);
	printf("\nNet Salary = %f",NS);
    printf("\n23DCE036 - HARSH GOSWAMI");
	return 0;
}
