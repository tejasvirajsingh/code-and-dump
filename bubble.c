#include<stdio.h>
int main (){
    int arr[] = { 7, 6, 2, 1, 5,8,18,9};
      int n =8;

    
       
       for (int  i=0; i<n; i++){
        printf("%d ", arr[i]);

       }
       // bubble sort 
       for(int i =0; i<n-1; i++){
        for(int j=0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
           printf("\n");
           for(int i=0; i<n;i++){
            printf("%d ",arr[i]);
           }
       } 
       return 0;
}