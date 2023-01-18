#include<stdio.h>

int main()
{
    char str[100];
    FILE *fp;
    fp=fopen("file1.dat","r");
    while(!feof(fp))
    {
    fscanf(fp,"%s",str);
    printf(" %s ",str);
    }
    fclose(fp);
}