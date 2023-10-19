#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void)
{
   int i=10;
   printf("CO¨ùo E¡ÌAa Au i=%d\n", i);
   inc(i);
   printf("CO¨ùo E¡ÌAa EA i=%d\n", i);
   
   return 0;
}

int inc(int counter)
{
   counter++;
   return counter;
}
