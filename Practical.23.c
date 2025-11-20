#include<stdio.h>           
                            

    int main()

        {
            int A[30];
            int s,i,n,P,MP=0;

            printf("Please enter How Many Days analisis you want to enter : ");
            scanf("%d",&n);

            for(i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
            }

            for(s=1;s<=n-1;s++)
            {
                if(A[s] > A[s-1])
                {
                    P = A[s] - A[s-1];

                    if(P > MP)
                    {
                        MP = P;
                    }
                }
            }

            printf("\n\nMaximum Profit : %d",MP);

            return 0;
        }
