#include<stdio.h>

int main(){
    int t,n,m;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d", &n);
        m = (n+1)/2;
        int list[n];
        for (int j=0;j<n;j++){
            scanf("%d", &list[j]);
        }
        printf("Case %d: %d\n", i+1, list[m-1]);
    }
    return 0;
}