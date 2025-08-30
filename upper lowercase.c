//To check the uppercase and lowercase
#include <stdio.h>
int main(){
char ch;
printf("Enter a character");
scanf("%c",&ch);
if(ch >='A'&&ch <='Z'){
printf("It is an Uppercase letter\n");
}
else{
printf("It is an lowercase letter\n");
}
return 0;
}
