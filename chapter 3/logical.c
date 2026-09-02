/* &&(and) operator behaves like multiplication (logically not mathematically)
   ||(or) operator behave like addition (logically not mathematically
   !(not) operator reverses output ie truth-->false, false-->truth
      logically = truth/false, false behaves like 0
      non zero values are true and zero values are false */
      
#include <stdio.h>

int main() {
    int a=1,b=0;

printf("%d\n", a&&b );

printf("%d\n", a||b);
 printf("%d\n", !a);

 //example of use-
  if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }

    return 0;
}


