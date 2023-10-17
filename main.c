#include <stdio.h>
#include <stdlib.h>

int main()
{
    int para;

    printf("Paranizi giriniz(TL): ");
    scanf("%d", &para);

    int yuz;
    yuz = para / 100;
    printf("\nYuzluk banknotlar: %d \n", yuz);

    int elli;
    elli = (para-yuz*100) / 50;
    printf("Ellilik banknotlar: %d \n", elli);

    int yirmi;
    yirmi = (para-(yuz*100)-(elli*50)) / 20;
    printf("Yirmilik banknotlar: %d\n", yirmi);

    int on;
    on = (para-yuz*100-elli*50-yirmi*20)/10;
    printf("Onluk banknotlar: %d\n", on);

    int bes;
    bes = (para-yuz*100-elli*50-yirmi*20-on*10)/5;
    printf("Beslik banknotlar: %d\n", bes);

    int bir;
    bir = para-(yuz*100)-(elli*50)-(yirmi*20)-(on*10)-(bes*5);
    printf("Birlik paralar: %d", bir);


    return 0;
}
