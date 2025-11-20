#include<stdio.h>           
                            

    struct Teams
    {
        char team_name[25];
        char sport[20];
        
    }

    struct Coach_Details
    {
        char coach_name[35];
        int age;
        int exp;
    }

    int main()
        {
            int ch;

            do
            {
                struct Teams t;
                struct Coach_Details c;

                start:

                printf("\n\nPress 1 to add Team Details.\n");
                printf("Press 2 to add Coach Details.\n");
                printf("Press 3 to view Team Details.\n");
                printf("Press 4 to view Coach Details.\n");
                printf("Press 5 to search for a Team.\n");
                printf("Press 6 to search for a Coach.\n");
                printf("press 7 to Exit.\n");

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n\nEnter Team Name : ");
                    scanf(" %[^\n]",t.team_name);

                    printf("Sport : ");
                    scanf(" %[^\n]",t.sport);

                    

                    break;

                case 2:
                    printf("\n\nEnter Coach Name : ");
                    scanf(" %[^\n]",c.coach_name);

                    printf("Age : ");
                    scanf("%d",&c.age);

                    printf("Years of Experience : ");
                    scanf("%d",&c.exp);

                    break;

                case 3:
                    printf("\n\nTeam Name : %s\n",t.team_name);
                    printf("Sport : %s\n",t.sport);
                    break;

                case 4:
                    printf("\n\nCoach Name : %s\n",c.coach_name);
                    printf("Age : %d\n",c.age);
                    printf("Experience : %d\n",c.exp);
                    break;

                case 5:

                    break;

                case 6:

                    break;

                case 7:
                    printf("\n\nThanks for Coming\n");
                    return 0;

                default:
                    printf("\n\nPlease enter a valid Choice\n");
                    goto start;
                }

            }while(1);

        return 0;
        }
