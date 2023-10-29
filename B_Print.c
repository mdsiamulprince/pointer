#include<stdio.h>
int printnumber(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
}
int main() {
     printnumber();
return 0;
}