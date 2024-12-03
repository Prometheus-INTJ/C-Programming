#include <stdio.h>

int main(void)
{
    char ch[100] = "welcome";
    char *p = "hello world!";
    int i = 0;
    
    while (*(ch+i) != '\0')
        ++i;
    
    while (*p != '\0')
    {
        *(ch+i) = *p;
        ++i;
        ++p;
    }
    
    *(ch+i) = '\0';
    
    puts(ch);
    
    return 0;
}
