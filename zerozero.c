#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int olil, yesang, hthit, rolil, ryesang;

    srand((int)time(NULL)); //rand() �Լ������� ������ �� �ɱ�    
    rolil = rand()%3;
    scanf("%d %d", &olil, &yesang);
    printf("��밡 �� �հ����Ǽ�:%d ���� �� �հ����Ǽ�: %d ���� ���� ��:", rolil, olil);
    if(rolil + olil == yesang){
        if(yesang == 0){
            printf("5");
        }else{
            printf("%d", yesang);
        }
    }else
    puts("������");

}