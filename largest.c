// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int arr[5] = {5,22,55,100,50};
     int max = arr[0];
     int n = 5;
     for (int i=1;i<n;i++){
         if(arr[i] > max){
             max = arr[i];
         }
     }
     printf("%d",max);
}