#include <stdio.h>

int main(){
 int i,j=0,n;
 //j=整除的個数
 //n=输入的整数
 printf("Enter:"); 
 scanf("%d",&n); 
 for(int i=2;i<n;i++){
     if(n%i==0){
         j++;
     }
}
 if(j>0||n==0||n==1) //輸入0跟1的時候->False
     printf("False");
 else
     printf("True");
}