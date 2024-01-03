#include<stdio.h>

int main()
{
    int matchstick=21,person,computer;
    while(1)
    {
        printf("Total no. of match sticks: %d \n\n",matchstick);
        printf("Pick 1 , 2 , 3 or 4 matchsticks: \n\n");
        scanf("%d",&person);
        matchstick-=person;
        computer = 5-person;
        printf("Computer choose %d Match stick.\n\n",computer);
        matchstick-=computer;
        printf("Match Sticks Left is : %d\n\n",matchstick);
        if(matchstick==1)
        {
            printf("So Sorry! You Lose The Game \n\n");
            break;
        }
    }
    printf("Created by 23CE079");
    return 0;

}
