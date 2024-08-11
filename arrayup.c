#include<stdio.h>
void main()
{
     int n,i,a[10],k,h;
     printf("Enter the number of  elements you want in an array:");
     scanf("%d",&n);

     printf("Enter the array elements:");
     for(i=0; i<n; i++){
        scanf("%d", &a[i]);
     }

     printf("Array elements are:");
     for(i=0; i<n; i++){
        printf("%d\n", a[i]);
     }

     printf("Enter the position to be updated:");
     scanf("%d", &k);
     printf("Enter the value to be updated:");
     scanf("%d", &h);
     for(i=0;i<n;i++){
       if(i+1==k){
         a[i]=h;
       } 
     }
     printf("Array after update:\n");
     for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i, a[i]);
     }
}