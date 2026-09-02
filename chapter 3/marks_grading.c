#include <stdio.h>

int main()
{
    int marks;
    printf("Please enter your marks ");
    scanf("%d", &marks);
    if (marks > 100)
    {
        printf("Please enter valid marks");
    }
    if (marks <= 100 && marks >= 90)
    {
        printf("Your grade is A");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("your grade is B");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("your grade is C");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("your grade is D");
    }
    else if (marks < 60 && marks >= 50)
    {
        printf("your grade is E");
    }
    else if (marks < 50)
    {

        printf("your grade is F");
    }
    return 0;
}


//OR


 #include <stdio.h>
 
 int main() {
    char grade;
    int marks; 
    printf("Enter your marks ");
    scanf("%d", &marks);
   if(marks<=100 && marks>=90){
    grade = 'A';
   }
   else if(marks<=90 && marks>=80){
    grade = 'B';
   }
   else if(marks<=80 && marks>70){
    grade = 'C';
   }
   else if(marks<=70 && marks>=60){
    grade = 'D';
   }
   else if(marks<=60 && marks>=50){
    grade = 'E';
   }
   else{
    grade = 'F';
   }
   printf("your grade is %c ", grade);
    return 0;
}   
   
 