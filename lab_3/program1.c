#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    id=fork();
    if(id<0)
    {
        printf("cannot create the file");
        exit(-1);
    }
    if(id==0)
    {
        printf("child process");
        exit(0);
    }
    else
    {
        printf("parent process\n");
    }
}


