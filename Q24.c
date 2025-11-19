#include<stdio.h>
int main(){
    char str[100];

    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a'){
            printf("%c", str[i] - 32);
        }else{
            printf("%c", str[i] + 32);
        }
    }
    return 0;
}