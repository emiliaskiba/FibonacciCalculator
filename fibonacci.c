#include<stdio.h>    

int main(){    
 int n1=0, n2=1;
 int n3, i, num;
 
 printf("Wpisz numer elementu, ktory chcesz obliczyc:");    
 fflush(stdout);
 scanf("%d",&num);

 if(num==0){
  printf("0");
  return 0;
 }
 
 if(num==1){
  printf("1");
  return 0;
 }
 
 for(i=1;i<num;i++){    
  n3=n1+n2;      
  n1=n2;    
  n2=n3;    
 }
 
 printf("%d",n3);  
 printf("\n 1) Kalkulator obliczajacy elementy ciągu Fibonacciego");
 printf("\n 2) Skiba Emilia ");
 printf("\n 3) gr. 4");   
 
  return 0;  
}    