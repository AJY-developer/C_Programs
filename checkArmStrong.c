#include<stdio.h>
#include<math.h>
// #include<conio.h> // in case of old editor
int main(){
  int num,digit,number_of_digit,sum=0,orig_num;
  // clrscr(); // in case of old editor"
  printf("Enter the number:");
  scanf("%d",&num);
  number_of_digit = floor(log10(num))+1;
  orig_num=num;
  
  while(num!=0){
    
    digit=num%10;
     num /=10;
     sum += pow(digit,number_of_digit);
  }
  
  if(sum==orig_num)
    printf("Number is armstrong");
  else
    printf("Numner is nor armstrong");

  
  // getch(); // in case of old editor
  return 0;
}
