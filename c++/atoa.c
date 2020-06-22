#include <stdio.h>
int main() {
  int n,d,x,i,xv=0,dv=0;
    scanf("%d",&n);
  if(n%2==1){
  for(i=0;i<n;i++){
      scanf("%d %d",&d,&x);
  }
  for(i=0;i<n;i++){
    if(d==3 &&(x==0 || x== 4)){
      dv+=1;
    }
    else if(d==4 &&(x==0 || x== 1)){
    dv+=1;
    }
    else if(d==0 &&(x==2 || x== 1)){
    dv+=1;
    }
    else if(d==1 &&(x==2 || x== 3)){
    dv+=1;
    }
    else if(d==2 &&(x==3 || x== 4)){
    dv+=1;
    }
    else{
       xv+=1;
    }
  }
 }if(xv>dv){
    printf("xerxes");
  }
  else{
    printf("dario");
  }
}
