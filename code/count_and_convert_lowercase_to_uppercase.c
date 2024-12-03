#include <stdio.h>

int str_fun(char *p);

int main(int argc, const char * argv[])
{
    char s[] = "welcome2024shanghai";
    int n = str_fun(s);
    printf("number = %d\n", n);
    printf("%s\n", s);
    
    return 0;
}

int str_fun(char *p) // char *p = s; char *p = &s[0]
{
    int count = 0;
    while(*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {
            count++;
            *p -= 32;
        }
        p++;
    }
    return count;
}
