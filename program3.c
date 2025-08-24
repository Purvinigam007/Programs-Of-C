#include <stdio.h>
int main(){
    float  celsius, fahrenheit;
    //Celsius to Fahrenheit
    printf("Enter temperature in celsius");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("temperature in fahrenheit =%2f\n", fahrenheit);
    //Fahrenheit to Celsius
    printf("Enter temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("temperature in celsius =%2f\n",celsius);
    return 0;
}
