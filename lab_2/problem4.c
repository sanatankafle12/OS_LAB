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
        printf("child process\n");
        printf("%d  %d\n",getppid(),getpid());
        sleep(5);
        printf("%d  %d",getppid(),getpid());
        exit(0);
    }
    else
    {
        printf("parent process\n");
        sleep(10);
        printf("\n%d",getpid());
        wait(NULL);
    }
}
