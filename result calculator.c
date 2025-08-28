//Build a result calculator marks of three subjects and print their,total,average,grade.
#include <stdio.h>
int main(){
int subject1, subject2, subject3, total;
float avg;
printf("Enter marks of three subjects:");
scanf("%d%d%d",&subject1,&subject2,&subject3);
total= subject1+ subject2+ subject3;
printf("total marks:%d",total);
 avg=total/3;
 printf("Average marks= %.2f", avg);
 if (avg >=90)
 {printf("Grade : A+\n");
 }
 else if ("avg > 80")
 {printf(" Grade : A\n");
 }
 else if (avg>= 70) {
        printf("Grade      : B\n");
    } else if (avg >= 60) {
        printf("Grade      : C\n");
    } else if (avg >= 50) {
        printf("Grade      : D\n");
    } else {
        printf("Grade      : F (Fail)\n");
    }    
 
 return 0;
}











