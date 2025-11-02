#include<stdio.h>
#include<math.h>
int main(){
    int n, reminder, sum = 0, originalN, power = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0)
    {
        n /= 10;
        power++;
    }
    
    n = originalN;

    while(n != 0){
        reminder = n % 10;
        sum += pow(reminder, power);
        n /= 10;
    }
    
    if (sum == originalN)
    {
        printf("%d is an Armstrong number.\n", originalN);
    }else{
        printf("%d is not an Armstrong number.\n", originalN);
    }
    
    return 0;
}