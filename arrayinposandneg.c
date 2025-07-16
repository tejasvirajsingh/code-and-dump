#include<stdio.h>
 int main(){
       
       int arr[] = {45, -48 , 41, 57 , 88 ,-74 , -85 ,-25 ,-81 ,-25};

       int size = sizeof(arr)/sizeof(arr[0]);
        
        printf("Positive Elements of number box:\n");

        for (int i=0; i<size; i++)
        {
            if(arr[i]> 0)
        {  printf("%d \n",arr[i]);
        }
        
        } 
        printf("\n");

        return 0;



 }