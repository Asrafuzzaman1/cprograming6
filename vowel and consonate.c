#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter.");
    ch=getchar();
    if(ch=='a'||ch=='A')
    {
        printf("this is a vowel.");
    }
    else if(ch=='e'||ch=='E')
    {
        printf("this is a vowel.");
    }
    else if(ch=='i'||ch=='I')
    {
        printf("this is a vowel.");
    }
    else if(ch=='o'||ch=='O')
    {
        printf("this is a vowel.");
    }
    else if(ch=='u'||ch=='U')
    {
        printf("this is a vowel.");
    }
    else if(ch=='w'||ch=='W')
    {
        printf("this is a semi vowel.");
    }
    else if(ch=='x'||ch=='X')
    {
        printf("this is a semi vowel.");
    }
    else
    {
        printf("this is a consonunt.");
    }



    return 0;
}
