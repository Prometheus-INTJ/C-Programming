#include<stdio.h>

void del_space(char *input_s)
{
    //char * output_s = input_s;
    char * output_s = &input_s[0];
    while(*input_s)
    {
        if(*input_s == ' ')
            input_s++;
        else
        {
            *output_s = *input_s;
            input_s++;
            output_s++;
        }
    }
    *output_s = '\0';
}

int main(int argc, const char * argv[])
{
    char s[] = "H e l l o W o r l d";
    puts(s);
    del_space(s);
    puts(s);
    
    return 0;
}
