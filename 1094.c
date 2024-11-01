#include<stdio.h>

int main(){
    int n,c=0,r=0,s=0, n1; char n2;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %c", &n1, &n2);
        if(n2=='C'){
            c+=n1;
        } else if (n2=='R'){
            r+=n1;
        } else if (n2=='S'){
            s+=n1;
        }
    }
    int total = c+s+r;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)c*100/total);
    printf("Percentual de ratos: %.2f %%\n", (float)r*100/total);
    printf("Percentual de sapos: %.2f %%\n", (float)s*100/total);
    return 0;
}