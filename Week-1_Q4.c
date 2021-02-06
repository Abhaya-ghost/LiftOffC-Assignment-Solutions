#include <stdio.h>

int main()
{
    float m, p, c, b, com;
    printf("enter the marks of physics\n");
    scanf("%f", &p);
    printf("enter the marks of chemistry\n");
    scanf("%f", &c);
    printf("enter the marks of math\n");
    scanf("%f", &m);
    printf("enter the marks of bio\n");
    scanf("%f", &b);
    printf("enter the marks of computer\n");
    scanf("%f", &com);
    float per = (m + p + c + b + com) / 5;
    if (per >= 90)
    {
        printf("Grade : A\n percentage : %f", per);
    }

    else if (per >= 80)
    {
        printf("Grade : B\n percentage : %f", per);
    }
    else if (per >= 70)
    {
        printf("Grade : c\n percentage : %f", per);
    }
    else if (per >= 60)
    {
        printf("Grade : D\n percentage : %f", per);
    }

    else if (per >= 40)
    {
        printf("Grade :E\n percentage : %f", per);
    }

    else
    {
        printf("Grade : F\n percentage : %f", per);
    }

    return 0;
}
