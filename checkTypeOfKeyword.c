#include<stdio.h>
#include<ctype.h>
// #include<conio.h> // in case of old editor
int main() {
  char ch;
  // clrscr(); // in case of old editor
  printf("Enter the character:");
  scanf("%c",&ch);
  
  if(islower(ch))
    printf("keyword is lower-case alphabet");
  else if(isupper(ch))
      printf("keyword is upper-case alphabet");
  else if(isdigit(ch))
    printf("keyword is number digit");
  else
     printf("keyword is special char");

  // getch(); // in case of old editor

  return 0;
}
