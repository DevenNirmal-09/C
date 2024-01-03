#include<stdio.h>
int main()
{
	long int TP = 80000;
	float NM,LM,ILM,NW,LW,ILW;

	printf("Total Population = %ld",TP);

	NM = TP*0.52;
	printf("\nNumber of  men = %.0f",NM);

	LM = TP*0.35;
	printf("\nNumber of literate men = %.0f",LM);

	ILM = NM-LM;
	printf("\nNumber of illiterate men = %.0f",ILM);

	NW = TP-NM;
	printf("\nNumber of women = %.0f",NW);

	LW = TP*0.30;
	printf("\nNumber of literate women = %.0f",LW);

	ILW = NW-LW;
	printf("\nNumber of illiterate women = %.0f",ILW);
    printf("\n23DCE036 - HARSH GOSWAMI");
	return 0;
}
