/* atoi example */
#include <stdio.h>  /* printf, fgets */
#include <stdlib.h> /* atoi */
#include <iostream>
using namespace std;

int main()
{
  int i;
  char buffer[256];
  printf("Enter a number: ");
  fgets(buffer, 256, stdin);
  i = atoi(buffer);
  printf("The value entered is %d. Its double is %d.\n", i, i * 2);
  cout << "The number is " << i << endl;
  return 0;
}
