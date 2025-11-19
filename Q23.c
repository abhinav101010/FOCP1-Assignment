#include<stdio.h>
int main(){
    int num, nInputs, greenPrice = 0, purplePrice = 0, geenCount = 0, purpleCount = 0;
    int temp1, temp2;

    scanf("%d", &num);
    
    for(int i=1; i<=num; i++){
        if(i % 2 != 0){
            scanf("%d %d", &greenPrice, &purplePrice);
        }else{
            scanf("%d %d", &purplePrice, &greenPrice);
        }
        scanf("%d", &nInputs);
        
        for(int j=1; j<=nInputs; j++){
            scanf("%d %d", &temp1, &temp2);
            if(temp1 == 1){
                geenCount++;
            }
            if(temp2 == 1){
                purpleCount++;
            }
        }

        printf("%d\n", (geenCount * greenPrice) + (purpleCount * purplePrice));
        geenCount = 0;
        purpleCount = 0;
    }
    return 0;
}