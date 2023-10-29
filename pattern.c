#include<stdio.h>
int main() {
     int n;
     scanf("%d",&n);
     int s,h,m;
     s=n-1;
     h=1;
     m=1;
     for(int i=1;i<n*2;i++){
for(int j=1;j<=s;j++){
    printf(" ");
}
if(i%2==0){
    for(int j=1;j<=m;j++){
        printf("-");
    }
   
}
 else{
          for(int j=1;j<=h;j++){
        printf("#");
    }
    }
if(i<n){
    s--;
    h+=2;
    m+=2;
}
else{
     s++;
    h-=2;
    m-=2;
}
printf("\n");
     }
return 0;
}