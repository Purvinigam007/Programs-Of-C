#include <stdio.h>
int main(){
char op;
double num1,num2;
printf("Enter the operator:+,-,*,/");
scanf("%c",&op);
printf("Enter two numbers");
scanf("%1f %1f",&num1,&num2);
switch(op){
case'+':
printf("%.21f+%.21f =%.21f\n,num1,num2,num1+num2");
break;
case'-':
printf("%.21f-%.21f =%.21f\n,num1,num2,num1-num2");
break;
case'*':
printf("%.21f*%.21f =%.21f\n,num1,num2,num1*num2");
break;
case'/':
  if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
                break;}
  return 0;




}
