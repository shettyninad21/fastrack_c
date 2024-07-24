// 3. Given two character inputs, find number of characters between them. For example, if
//    input is ‘A’ and ‘E’ the output is 3.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  char first;
  char sec;
  int no_of_letters;

  printf("enter the first character \n");
  scanf(" %c",&first);

  printf("\n enter the second character: \n");
  scanf(" %c", &sec);

// Calculate the absolute difference between ASCII values and subtract 1
    no_of_letters = (first < sec) ? (sec - first - 1) : (first - sec - 1);

  //no_of_letters = sec - first -1 ;

  printf("no of letters in between are %d",no_of_letters);

  return 0;

}






