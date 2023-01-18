#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;
    if(argc<2)
    {
        printf("\n Only one argument provided.\n");
        exit(0);
    }
    if((dp=opendir(argv[1]))==NULL)
    {
        printf("Can't open %s file\n",argv[1]);
        exit(1);
    }
    while((dirp=readdir(dp))!=NULL)
    {
        printf("%s\n",dirp->d_name);
    }
    closedir(dp);
}