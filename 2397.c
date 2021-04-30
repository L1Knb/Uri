#include <stdio.h>

int main()

{

    double a, b, c, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (b < c)

    {

        temp = b;

        b = c;

        c = temp;

    }

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (a >= b + c)

    {

        printf("n\n");

    }

    else if (a * a == b * b + c * c)

    {

        printf("r\n");

    }

    else if (a * a > b * b + c * c)

    {

        printf("o\n");

    }

    else if (a * a < b * b + c * c)

    {

        printf("a\n");

    }


    return 0;

}