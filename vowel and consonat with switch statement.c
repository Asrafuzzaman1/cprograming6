#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter.");
    ch=getchar();
    switch(ch)
    {
    case 'a':
        printf("this is a vowel.");
        break;
         case 'A':
        printf("this is a vowel.");
        break;
         case 'e':
        printf("this is a vowel.");
        break;
         case 'E':
        printf("this is a vowel.");
        break;
         case 'i':
        printf("this is a vowel.");
        break;
         case 'I':
        printf("this is a vowel.");
        break;
         case 'o':
        printf("this is a vowel.");
        break;
         case 'O':
        printf("this is a vowel.");
        break;
         case 'u':
        printf("this is a vowel.");
        break;
         case 'U':
        printf("this is a vowel.");
        break;
         case 'w':
        printf("this is a semi vowel.");
        break;
         case 'W':
        printf("this is a semi vowel.");
        break;
         case 'x':
        printf("this is a semi vowel.");
        break;
         case 'X':
        printf("this is a semi vowel.");
        break;
         default:
            printf("this is a cnsonant.");
            break;

    }




    return 0;
}
