/* Libraries */
#include <stdio.h>

/* Main Function */
int main()
{
  /* Variables */
  char text[20] = "artfy0asenj";
  int lenght;

  /* Finding Lenght of Text */
  for (lenght = 0 ; text[lenght]!='\0' ; lenght++);

  /* Find Index of Zero (i is index of the zero)*/
  int i;
  for (i = 0 ; text[i]!='0' ; i++);

  char first = text[0];
  char last = text[lenght-1];

  /* Changing Before Zero */
  int j;
  for (j = 0; j < i-1 ; j++)
  {
    text[j] = text[j+1];
  }

  text[i-1] = first;

  /* Changing After Zero */
  for (j = lenght-1; j > i ; j--)
  {
    text[j] = text[j-1];
  }

  text[i+1] = last;

  /* Print Changed Text */
  int k;
  for (k = 0; k < lenght; k++)
  {
    printf("text[%d] : %c\n", k, text[k]);
  }

  return 0;
}