#include<stdio.h>

    int main()

        {
            int age;

            for(int i=1;1<2;i++)
            {

                int tp=0;
                
                lable4:

                printf("\n\nGroup No.%d\n",i);

                for(int j=1;1<2;j++)
                {
                    int ch;

                    printf("\nPress 1 for giving input.\n");
                    printf("Press 2 if all members are Registered.\n");
                    printf("Press 3 for Exiting.\n");

                    lable2:

                    scanf("%d",&ch);

                    switch(ch)
                    {
                    case 1:

                        printf("%d. ",j);
                        printf("Please enter your Age\t: ");

                        lable1:

                        scanf("%d",&age);

                        if(age<12 && age>0)
                        {
                            tp=tp+0;
                            printf("You'r eligable for free entry.\n");
                            printf("Your ticket price will be Rs.0\n");
                        }

                        else if(age>=12 && age<60)
                        {
                            tp=tp+400;
                            printf("You'r not eligable for free entry.\n");
                            printf("Your ticket price will be Rs.400\n");
                        }

                        else if(age>=60 && age<120)
                        {
                            tp=tp+280;
                            printf("You'r eligable for 30%% Discount.\n");
                            printf("Your ticket price will be Rs.280 Only.\n");
                        }

                        else
                        {
                            printf("   Please enter a valid Age\t: ");
                            goto lable1;
                        }
                        break;

                    case 2:

                        printf("Your Group have to Pay Rs.%d\n",tp);
                        printf("Thank you for Coming Here.\n");
                        i++;
                        goto lable4;
                        break;

                    case 3:

                        return 1;
                        break;

                    default:

                        printf("Please enter a valid Choice : ");
                        goto lable2;
                        break;

                    }
                }
            }

            return 0;
        }
