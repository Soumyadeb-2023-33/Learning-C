// This challenge will help you to learn how to take a character, a string and a sentence as input in C.
// To take a single character  as input, you can use scanf("%c", &ch );
//  and printf("%c", ch) writes a character specified by the argument char to stdout
// You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .
#include<stdio.h>
int main() { char ch,s[100],sen[200]; scanf( "%c",&ch); scanf("\n"); scanf("%s",s); scanf("\n"); gets(sen); scanf("\n"); printf("%c\n",ch); printf("%s\n",s); printf("%s\n",sen);  
return 0;
}