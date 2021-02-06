#include<stdio.h>

int main(){
    float c;
    printf("enter the temp in celcius\n");
    scanf("%f",&c);
    float f;
    f=1.8*c+32;
    printf("temp in farenhit %f",f);
    return 0;
}