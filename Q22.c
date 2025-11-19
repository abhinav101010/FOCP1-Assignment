#include<stdio.h>
int main(){
    char str[20];
    int zCount = 0;
    int oCount = 0;

    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'z'){
            zCount++;
        } else if(str[i] == 'o'){
            oCount++;
        }
    }

    if (oCount == 2*zCount)
    {
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}








// 1100
// 0101