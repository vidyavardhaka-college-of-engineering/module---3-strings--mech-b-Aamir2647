//Complete the given program to count number of vowels in a string
//read the input string to be find number vowels present.
//apply comparison character('a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u' and 'U'), if match found, the count to be incremented by one.
//finally display the count of vowels present

//Expected input & output:-
//Enter the string: nithin
//Number of vowels in the string = 2

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string: ");
  scanf("%s", s);

  while (s[c] != '\0') {
                               //place logic to find the vowel
  }

  printf("Number of vowels in the string = %d", count);

  return 0;
}
