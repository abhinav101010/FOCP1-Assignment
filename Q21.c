#include<stdio.h>
int main(){
    int expectedLength, num, length, width;

    scanf("%d", &expectedLength);
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        scanf("%d %d", &length, &width);
        if(length < expectedLength || width < expectedLength){
            printf("UPLOAD ANOTHER");
        }else if(length == width){
            printf("ACCEPTED");
        } else{
            printf("CROP IT");
        }
        printf("\n");
    }

    return 0;
}