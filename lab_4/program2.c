#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    FILE *fp;
    printf("Enter the string");
    fgets(str,200,stdin);
    fp=fopen("file1.dat","w+");
    while(!feof(fp))
    {
    fscanf(fp,"%s",str);
    }
    fprintf(fp,"%s",str);
}