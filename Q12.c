#include<stdio.h>
int main(){
    int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};
    int minimum, maximum;

    for(int i = 0; i < 30; i++)
    {
        if(i == 0){
            minimum = arr[i];
            maximum = arr[i];
        }else{
            if(arr[i] < minimum){
                minimum = arr[i];
            }
            if(arr[i] > maximum){
                maximum = arr[i];
            }
        }
    }
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    return 0;
}