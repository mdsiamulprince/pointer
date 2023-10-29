#include<stdio.h>
void fun(int *p){
printf("main er value-%d\n",*p);
}
int main() {
     int x=100;
     printf("p er value-%p\n",&x);
     fun(&x);
return 0;
}