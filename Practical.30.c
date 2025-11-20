#include<stdio.h>           

    int main()
    {
        int items;

        printf("Number of items : ");
        scanf("%d",&items);

        float prices[items];
        float temp;

        printf("\n  Enter Prices : \n");

        for(int i=0 ; i<items ; i++)
        {
            printf("Enter price of %d : ",i+1);
            scanf("%f",&prices[i]);
      }

        for(int i=0 ; i<items-1 ; i++)
        {
            for(int j=i+1 ; j<items ; j++)
       {
                if(prices[i]>prices[j])
            {
                    temp = prices[i];
                   prices[i] = prices[j];
                   prices[j] = temp;
     }
            }
        }

        printf("\n  Sorted prices : \n");

        for(int i=0 ; i<items ; i++)
        {
            printf("   %.1f\n",prices[i]);
        }

    return 0;
    }
