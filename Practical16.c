#include<stdio.h>

    int main()

        {
            printf("This is a simple game.\nFirst of all understand game rules below.\n");
            printf("\nRules :\n\n");
            printf("1. The game starts with 21 Matchsticks.\n");
            printf("2. The user is asked to pick 1, 2, 3, or 4 Matchsticks.\n");
            printf("3. After the user picks, the computer makes its pick.\n");
            printf("4. Who picks the last Matchstick loses the game.\n\n\n");

            int u,c,t;

            for(t=21;t>=0;t=t-(c+u))
            {
                if(t==0)
                {
                    printf("\nMatchsticks remaining : %d",t);
                    printf("\nYou have picked up the last Matchstick.\n");
                    printf("You lost the game.\n\n");
                }

                else if(t==1)
                {
                    printf("Total number of Matchsticks(remaining) : %d\n",t);
                    printf("Enter the number of Matchsticks you want to pick : ");

                    lable1:

                    scanf("%d",&u);

                    if(u!=1)
                    {
                        printf("Please enter a valid number : ");
                        goto lable1;
                    }

                    c=0;
                }

                else if(t>1)
                {
                    printf("Total number of Matchsticks(remaining) : %d\n",t);
                    printf("Enter the number of Matchsticks you want to pick : ");

                    lable2:

                    scanf("%d",&u);

                    if(u<0 || u>4)
                    {
                        printf("Please enter a valid number : ");
                        goto lable2;
                    }

                    printf("Computer has picked up %d Matchsticks.\n\n",c=5-u);
                }
            }

        return 0;
        }
