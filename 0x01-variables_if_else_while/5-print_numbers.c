#include <stdio.h>
/**
* main - start point of the program
* Return: always must be 0 in case you are using int if you using void
*  no need to return keyword
*/
int main(void)
{
int counter;
for (counter = 0; counter < 10; counter++)
{
printf("%d", counter);
}
putchar('\n');
return (0);
}
