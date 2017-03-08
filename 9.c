#include <stdio.h>

int main(){
int n,i,j=1;
//n=输入的数
printf("Enter:"); 
scanf("%d",&n); 
for(int i=1;i<=n;i=i+1){
	j=j*i;
}
printf("factorial=%d\n",j);
}