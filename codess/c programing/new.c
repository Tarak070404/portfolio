#include<stdio.h>
int main(){
    float weight,height,bmi;

    printf("Enter weight in kilograms");
    scanf("%f",&weight);

    printf("Enter weight in meters");
    scanf("%f",&height);

    bmi = weight/(height*height);
    printf("bmi %.2f\n",bmi);

    
}