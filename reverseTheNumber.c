#include <stdio.h>
#include<math.h>
//#include<conio.h> // in case of old editor
int main(void) {
int i,num,sum=0,digit,weig,rev=0;
  // clrscr(); // in case of old editor
  printf("enter the number: ");
  scanf("%d",&num);
  
  
  while(num!=0){
     digit=num%10; // separating the digits
     num /=10;
     sum += digit;
     rev = rev*10+digit;
  }

  printf("\nnumber in reverse order=%d,\nsum of digit=%d",rev,sum);
  // getch();  // in case of old editor
  return 0;
}
