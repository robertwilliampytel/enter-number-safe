#include <stdio.h>
#include <stdlib.h>


int enter_number(void);


int main() {


  int entered = enter_number();
  
  
  printf("Returned value is still: %d\n", entered);
  
  
  return 0;
}


int enter_number(void)
{
  int    number = 0;
  char * buffer = (char *) malloc(100 * sizeof(char));


  while (number == 0 || number == -1 || number > 2000000 || number < -2000000) {
    printf("Please enter a number:\n");
    scanf("%s", buffer);
    sscanf(buffer, "%d", &number);
  }


  printf("\n");
  printf("You entered %d\n", number);
  
  
  free(buffer);
  
  
  return number;
}
