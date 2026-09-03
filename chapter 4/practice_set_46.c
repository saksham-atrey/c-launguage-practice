/*#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    for(n=1;n<=10;n++){
        sum = sum + n;

    }
    printf("%d", sum);
    return 0;
}*/

#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    do
    {
        sum = sum + n;
        n++;
    } while (n <= 100);
    printf("%d", sum);
    return 0;
}
