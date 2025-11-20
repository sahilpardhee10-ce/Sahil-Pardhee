#include<stdio.h>           
#include <math.h>           

    void inputSides(float *a, float *b, float *c);
    int isValidTriangle(float a, float b, float c);
    float area(float a, float b, float c);

    int main()
    {
        float a, b, c;

        inputSides(&a, &b, &c);

        if(isValidTriangle(a, b, c))
        {
            printf("The given sides form a VALID triangle.\n");

            float ans = area(a, b, c);
            printf("Area of the triangle = %.2f\n", ans);
        }
        else
        {
            printf("The given sides DO NOT form a valid triangle.\n");
        }

        return 0;
    }


    void inputSides(float *a, float *b, float *c)
    {
        printf("Enter length of side 1: ");
        scanf("%f", a);
        printf("Enter length of side 2: ");
        scanf("%f", b);
        printf("Enter length of side 3: ");
        scanf("%f", c);
    }

    int isValidTriangle(float a, float b, float c)
    {
        if(a <= 0 || b <= 0 || c <= 0)
        {
            return 0;
        }

        return (a + b > c && a + c > b && b + c > a);
    }

    float area(float a, float b, float c)
    {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
