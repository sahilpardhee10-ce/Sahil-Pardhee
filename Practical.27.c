#include<stdio.h>         

    void generateSavings(int n);

    int main()
    {
        int n;

        printf("Enter number of months: ");
        scanf("%d", &n);

        if(n < 1)
        {
            printf("Invalid input. Months should be >= 1.\n");
            return 0;
        }

        generateSavings(n);

        return 0;
    }


    void generateSavings(int n)
    {
        int a = 1, b = 1, next, i;

        if(n >= 1)
        {
            printf("Month 1: %d\n", a);
        }

        if(n >= 2)
        {
            printf("Month 2: %d\n", b);
        }

        for(i = 3; i <= n; i++)
        {
            next = a + b;
            printf("Month %d: %d\n", i, next);
            a = b;
            b = next;
        }
    }
