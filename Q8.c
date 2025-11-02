#include<stdio.h>
int main(){
    int a = 0, b = 1, sum;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}