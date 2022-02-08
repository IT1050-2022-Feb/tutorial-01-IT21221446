/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int i,t,tot=0;

  printf("Enter a number:");
  scanf("%d",&i);

  for(t=1;t<=i;t++)
  {
    tot=tot+t;
  }

  printf("%d",tot);

  return 0;
}

