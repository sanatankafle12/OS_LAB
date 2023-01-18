#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

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
        sleep(5);
        printf("%d",getpid());
        exit(0);
    }
    else
    {
        wait(NULL);
    }
}


