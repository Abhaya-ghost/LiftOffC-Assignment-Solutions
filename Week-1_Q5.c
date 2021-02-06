#include <stdio.h>

int main()
{
    char c;
    printf("enter the alphabet\n");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
        printf("it is vowel\n");
        break;
    case 'A':
        printf("it is vowel\n");
        break;
    case 'e':
        printf("it is vowel\n");
        break;
    case 'E':
        printf("it is vowel\n");
        break;
    case 'i':
        printf("it is vowel\n");
        break;
    case 'I':
        printf("it is vowel\n");
        break;
    case 'o':
        printf("it is vowel\n");
        break;
    case 'O':
        printf("it is vowel\n");
        break;
    case 'u':
        printf("it is vowel\n");
        break;
    case 'U':
        printf("it is vowel\n");
        break;

    default:
        printf("it is consonants\n");
        break;
    }
}
