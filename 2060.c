#include<stdio.h>

int main(){
    int t,n,two=0,three=0,four=0,five=0;
    scanf("%d", &t);
    for (int i=1;i<=t;i++){
        scanf("%d", &n);
        if (n%2==0){
            two++;
        }
        if (n%3==0){
            three++;
        }
        if (n%4==0){
            four++;
        }
        if (n%5==0){
            five++;
        }
    }
    printf("%d Multiplo(s) de %d\n", two, 2);
    printf("%d Multiplo(s) de %d\n", three, 3);
    printf("%d Multiplo(s) de %d\n", four, 4);
    printf("%d Multiplo(s) de %d\n", five, 5);
}