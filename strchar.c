#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="This is a string for testing";
  char *p;
  p = strchr (string,'i');
 
  printf ("Character i is found at position %d\n",(int)(p-string+1));
  printf (" \"%s\"", p);
 
   return 0;
}