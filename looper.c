#include <stdio.h>
#include <unistd.h>

int main() {
   printf("CIS140U Lab 12 Counter Program\nThis process will continue to count until killed.\n");
   fflush(stdout);
   int i = 0;
   while(1){
	   printf("The count is %d\n",i);
   	   fflush(stdout);
	   i++;
	   sleep(1);
   }
   return 0;
}
