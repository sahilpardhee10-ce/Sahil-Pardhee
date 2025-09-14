#include<stdio.h>

    int main()

        {
            int i=1,ch;
            float m;
            char *massage;

            do
            {
                printf("Press 1 for entering marks.\n");
                printf("Press 2 for exiting.\n\n");

                lable2:

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:

                    printf("\nStudent %d\n",i);
                    printf("Enter marks : ");

                    lable1:

                    scanf("%f",&m);


                    if(m>=90 && m<=100)
                    {
                        printf("You have got A grade!!\nExcellent!!\n\n\n");
                    }
                    else if(m>=80 && m<90)
                    {
                        printf("You have got B grade!!\nGood Work!\n\n\n");
                    }
                    else if(m>=70 && m<80)
                    {
                        printf("You have got C grade!!\nYou can do Better.\n\n\n");
                    }
                    else if(m>=60 && m<70)
                    {
                        printf("You have got D grade!!\nYou should study hard.\n\n\n");
                    }
                    else if(m<60 && m>=0)
                    {
                        printf("You have got F grade!!\nYou have to study really very Hard!!\n\n\n");
                    }
                    else if(m<0 || m>100)
                    {
                        printf("Please enter valid Marks : ");
                        goto lable1;
                    }


                    /*
                    massage = (m>=90 && m<=100) ? "You have got A grade!!\nExcellent!!\n\n\n" :
                                (m>=80 && m<90) ? "You have got B grade!!\nGood Work!\n\n\n" :
                                (m>=70 && m<80) ? "You have got C grade!!\nYou can do Better.\n\n\n" :
                                (m>=60 && m<70) ? "You have got D grade!!\nYou should study hard.\n\n\n" :
                                (m<60 && m>=0) ? "You have got F grade!!\nYou have to study really very Hard!!\n\n\n" :
                                (m<0 || m>100) ? "Please enter valid Marks" : " : ";
                                goto lable1;

                                printf("%s",massage);
                    */

                    break;

                case 2:

                    printf("\nHave a Great Day!!\n\n");
                    goto end;
                    break;

                default:

                    printf("Please enter a valid Choice : ");
                    goto lable2;
                    break;

                }

                i++;

            }while(1);

            end:

            return 0;
        }
