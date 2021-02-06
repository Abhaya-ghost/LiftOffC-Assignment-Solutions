#include<stdio.h>

int main(){
    int r,d;
    printf("enter the radius of the circle\n");
    scanf("%d",&r);
    float area,circum;
    area=3.141*r*r;
    circum=2*3.141*r;
    d=2*r;
    printf("area : %f\t circumference : %f\t diameter : %d\n",area,circum,d);

    return 0;
}