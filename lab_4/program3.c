#include <stdio.h>
#include <stdlib.h>

int main()
{
int id;
if(id=create("z.txt",0)==-1)
{
printf("cannot create the file");
exit(1);
}
else
{
printf("file is created");
exit(1);
}

}