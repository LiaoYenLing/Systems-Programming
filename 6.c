#include <stdio.h>

int main(){
int i,j;
int a[2][2]={{1,2},{3,4}};
int b[2][2]={{1,1},{1,1}};
int r[2][2]={};
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    r[i][j]=a[i][j]+b[i][j];
   printf("add=[%d]\n",r[i][j]);
}
}
}
