#include <stdio.h>
#define MAXLINE 1000

int bufferFun(char input)
{
    char c[MAXLINE] = "clear";
    if (*input == 'c')
    {
        for(int numOfNL; numOfNL < 40; numOfNL++)
        {
            printf("\n");    
        }
    }
}

int termPS1(void)
{
    printf(">> ");
}

int main(void) // input ?
{
    char **command;
    termPS1();
    while(1)
    {
    
        putchar(**command);
        **command = getchar();
        bufferFun(command);
    } 
}
