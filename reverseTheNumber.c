#include <stdio.h>
#include<math.h>
//#include<conio.h> // in case of old editor
int main(void) {
int i,num,sum=0,digit[50],weig,rev=0;
  // clrscr(); // in case of old editor
  printf("enter the number: ");
  scanf("%d",&num);
  
  weig=floor(log10(num))+1; // finding the number of digits
  
  for(i=1;i<=weig;i++){
     digit[i]=num%10; // separating the digits
     num =(num-digit[i])/10;
     sum += digit[i];
     rev+= digit[i]*pow(10,weig-i);
  }

  printf("\nnumber in reverse order=%d,\nsum of digit=%d",rev,sum);
  // getch();  // in case of old editor
  return 0;
}
