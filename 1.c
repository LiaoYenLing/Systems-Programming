#include <stdio.h>

int main(){
 int num,mult=1;
 for(int num=1;num<=10;num=num+1){
     mult=mult*num;
 }
 printf("mult=%d\n",mult);
}