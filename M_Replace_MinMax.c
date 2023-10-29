#include<stdio.h>
int main() {
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     
     int min_ind=0;
   
     int max_ind=0;
     for(int i=0;i<n;i++){
      if(a[i]<a[min_ind]){
         
         min_ind=i;
      }
      if(a[i]>a[max_ind]){
         
         max_ind=i;
      }
     }
   int temp=a[min_ind];
     a[min_ind]=a[max_ind];
     a[max_ind]=temp;
      for(int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
 
    
return 0;
}