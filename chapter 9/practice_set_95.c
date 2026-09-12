//Write a program with a structure representing a complex number
#include <stdio.h>
struct complex 
{
    int real;
    int imaginary;
};
  void display(struct complex c);
void display(struct complex c){
    printf("The complex number is %d + %di\n", c.real, c.imaginary );
};
int main(){
    struct complex n1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real part: ");
        scanf("%d", &n1[i].real);
        printf("enter imaginary part: ");
        scanf("%d",&n1[i].imaginary );
     display(n1[i]);
    };
    
    return 0;
}