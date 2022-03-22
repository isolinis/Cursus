#include <stdio.h>
#include <stdlib.h>

int main (void) {
   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));
   printf("USER+ : %s\n", getenv("USER+"));

   return(0);
}
