#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int olil, yesang, hthit, rolil, ryesang;

    srand((int)time(NULL)); //rand() 함수를위한 임의의 수 심기    
    rolil = rand()%3;
    scanf("%d %d", &olil, &yesang);
    printf("상대가 든 손가락의수:%d 내가 든 손가락의수: %d 내가 떄릴 수:", rolil, olil);
    if(rolil + olil == yesang){
        if(yesang == 0){
            printf("5");
        }else{
            printf("%d", yesang);
        }
    }else
    puts("없음ㅋ");

}