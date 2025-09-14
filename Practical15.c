#include<stdio.h>
#include<unistd.h>

    int main()

        {
            int sec,ch;

            do
            {
                printf("Press 1 for setting Timer.\n");
                printf("Press 2 for Exiting.\n");

                lable2:

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:

                    printf("Set Countdown time(seconds) : ");

                    lable1:

                    scanf("%d",&sec);

                    if(sec<=0)
                    {
                        printf("Please Enter A Logical Number : ");
                        goto lable1;
                    }

                    else
                    {
                        printf("\nStarting Countdown for %d seconds.\n",sec);
                        sleep(1);

                        for(int i=sec;i>=0;i--)
                        {
                            if(i==0)
                            {
                                printf("Countdown Completed!\n\n\n");
                            }

                            else if(i>0)
                            {
                                printf("%d\n",i);
                                sleep(1);
                            }
                        }
                    }
                    break;

                case 2:

                    printf("Have a nice Day.\n\n");
                    return 0;
                    break;

                default:

                    printf("Please enter a valid choice : ");
                    goto lable2;
                    break;

                }
            }while(1);

            return 0;
        }

