#include <stdio.h>
#include <string.h> //string functions library
int main(){
    //strlen()-
    char str[] = "hmm";
    printf("%d\n", strlen(str)); //prints lenght of string excluding null character

    //strcpy()-
    char lol[] = "bruh"; //source
    char lmao[30];  //target
    strcpy (lmao, lol); // copies source string into target string strcpy(target,source)
    printf("%s\n", lmao);

    //strcat()-
    char s1[12] = "ok";
    char s2[] = "boomer";
    strcat(s1, s2); // concatenates (joins) 2 strings together
    printf("%s\n", s1); // s1 now contain okboomer 

   //strcmp()-
   int a =strcmp("yo", "dude"); /*compares 2 strings and returns 0 if they are equal, positive 
   value if the first string is after the second string in the ASCII value(dictonary ranking),
    negative if second string is ahead of the first string in ASCII value*/ 
   int b =strcmp("dude", "yo"); 
   int c =strcmp("yo", "yo");
   printf("%d %d %d\n", a,b,c);
   return 0;
}