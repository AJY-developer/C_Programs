#include<stdio.h>
// #include<conio.h> // in case of old editor
int main(){
  int flag = 1,j=0,lL,uL;
  printf("Enter the starting point for finding prime numbers: ");
  scanf("%d", &lL);
  // for scanning functions 
  printf("Enter the ending point for finding prime numbers: ");
  scanf("%d", &uL);
  // clrscr(); // in case of old editor
  printf("The list of prime numbers is\n");
  for(lL;lL<=uL;lL++){
    
     for(int j=2;j<lL;j++)
       if(lL%j==0)
         flag=0;
     
  
     if(flag){
       printf("%d  ",lL);
       j++;
       if(j%5==0)
         printf("\n\n");
     }
     
     flag = 1;
  }
  // getch(); // in case of old editor
  return 0;
}
