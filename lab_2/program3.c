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
        sleep(3);
        printf("child process\n");
        exit(0);
    }
    else
    {
        printf("parent process\n");
        printf("%d\n",getpid());
        wait(NULL);
    }
}