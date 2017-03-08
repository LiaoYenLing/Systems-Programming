#include <stdio.h>

int main(){
 int i,j;
 for(int i=2;i<=9;i++){
     for(int j=1;j<=9;j++){
       printf("%d*%d=%d\t",i,j,i*j);
       // \t為tab縮進
     }
 }
 printf("\n");
}