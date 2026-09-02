//In C a non-zero value is considered to be true.
#include <stdio.h>

int main() {
    if(1){
        printf("yes\n");
    };
    if(1.5){
        printf("yes\n");
    };
    if(72){
        printf("yes\n");
    };
    if(-1){
        printf("yes\n");
    };
    if(0){
        printf("yes\n");
    }; 
    return 0;
}

//similarly-

#include <stdio.h>

int main() {
    if(0){
        printf("yo");
    }
    else{
        printf("no");
    }
    return 0;
}