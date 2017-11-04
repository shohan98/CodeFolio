#include <stdio.h>
int main()
{
    char ch;
    printf("enter:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
        printf("%c The letter is vowel\n",ch);
    }
    else
        {
        printf("%c The letter is consonant\n",ch);
    }
    return 0;
}
