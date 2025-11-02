#include<stdio.h>
int main(){
    int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};
    int odd_array[30];
    int even_array[30];
    for (int i = 0; i < 30; i++)
    {
        if(arr[i]%2){
            printf("Odd number: %d\n", arr[i]);
            odd_array[i] = arr[i];
        }
        else{
            printf("Even number: %d\n", arr[i]);
            even_array[i] = arr[i];
        }
    }
    
    for(int i = 0; i < 30; i++){
        if(odd_array[i]){
            printf("Odd array element at index %d: %d\n", i, odd_array[i]);
        }
        if(even_array[i]){
            printf("Even array element at index %d: %d\n", i, even_array[i]);
        }
    }
    return 0;
}