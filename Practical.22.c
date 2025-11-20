#include<stdio.h>           
                            

    int main()

        {
            int row,col,seats,a,b;
            int A[8][10]={{0}};

            printf("How many seats you want to reserve : ");
            scanf("%d",&seats);

            for(int i=1;i<=seats;i++)
            {
                printf("Enter row and seat number for seat %d (e.g., 2 5) : ",i);

                lable1:
                scanf("%d %d",&row,&col);

                if(row>8 || row<1)
                {
                    printf("Please enter a valid seat : ");
                    goto lable1;
                }

                if(col>10 || col<1)
                {
                    printf("Please enter a valid seat : ");
                    goto lable1;
                }

                a=row-1;
                b=col-1;

                A[a][b]=1;
            }

            printf("\n\nSeating Chart : \n\n");

            for(int j=1,k=0 ; j<9,k<8 ; j++,k++)
            {
                printf("Row %d : ",j);

                for(int h=0;h<10;h++)
                {
                    printf("%d ",A[k][h]);
                }

                printf("\n");
            }

            return 0;
        }
