#include<stdio.h>
int main(){
    int arr[10] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99};
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == 99){
            printf("Element found at index %d\n", i);
            break;
        }else if(i == 9){
            printf("Element not found\n");
        }
    }

    return 0;
}
    