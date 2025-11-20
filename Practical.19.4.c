#include<stdio.h>           
                            

    int main()
    {
        int n = 4;
        int i, j;
        char ch;

        
        for (i = 1; i <= n; i++)
        {
            
            for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
          
            for (j = 1; j <= 2 * i - 1; j++)
            {
                ch = 'A' + (j <= i ? j - 1 : 2 * i - j - 1);
                printf("%c", ch);
            }
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--)
        {
            
            for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            
            for (j = 1; j <= 2 * i - 1; j++)
            {
                ch = 'A' + (j <= i ? j - 1 : 2 * i - j - 1);
                printf("%c", ch);
            }
            printf("\n");
        }

        return 0;
}
