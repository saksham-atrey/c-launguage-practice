/* 2d arrays are represented as arr[x][y] where x is the number of rows and y is the number
 of columns*/
 #include <stdio.h>
 
 int main(){
    int arr[3][2] = {{1, 4},
                     {7, 9},
                    {11, 22}};
/*printf("%d\n", arr[0][0]);
printf("%d\n", arr[0][1]);
printf("%d\n", arr[1][0]);
printf("%d\n", arr[1][1]);
printf("%d\n", arr[2][0]);
printf("%d\n", arr[2][1]);*/
//OR-
for(int i=0; i<3;  i++){
    for(int j=0; j<2; j++){
        printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    }
}
    return 0;
}