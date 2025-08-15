#include<stdio.h>
int linearSearch(int arr[], int size, int element){
  
     for (int i =0; i<size; i++)
{
    if (arr[i]== element)
    {
        return i;
    }  

     }
    return -1;
}

          int main(){
            int arr[]={1,2,8,87,557,5,57,85,58,96,7,451,25,7,45};
            int size = sizeof(arr)/sizeof(int);
            int element = 96;
            int searchIndex = linearSearch(arr, size, element);
          printf("The element %d was found at index %d \n", element , searchIndex );
            return 0;
          }