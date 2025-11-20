#include<stdio.h>          
                          

    void reverse(char word[], int len)
    {
        int i, j;
        char temp;
        for(i = 0, j = len - 1; i < j; i++, j--)
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }
    }

    int main()
    {
        FILE *fp;
        char ch, word[100];
        int index = 0;

        fp = fopen("Demo.txt", "r");
        if(fp == NULL)
        {
            printf("Error: Demo.txt not found!\n");
            return 0;
        }

        printf("Reversed Words Output:\n");

        while((ch = fgetc(fp)) != EOF)
        {

            
            if(ch == ' ' || ch == '\n' || ch == '\t')
            {

                if(index > 0)
                {
                    word[index] = '\0';
                    reverse(word, index);
                    printf("%s", word);
                    index = 0;
                }

                printf("%c", ch);
            }
            else
            {
                word[index++] = ch;
            }
        }

        if(index > 0)
        {
            word[index] = '\0';
            reverse(word, index);
            printf("%s", word);
        }

        fclose(fp);
        return 0;
    }
