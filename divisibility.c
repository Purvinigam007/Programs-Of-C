#include <stdio.h>
int main(){
int num,div;
printf("Enter the num");
scanf("%d",&num);
printf("Enter the divisor");
scanf("%d",&div);
if(div==0){
printf("Division by zero is not allowed\n");
}
else if(num%div==0){
printf("%d is divisble by %d\n",num,div);
}
else{
printf("%d is not divisible by %d\n,num,div");}
return 0;
}
