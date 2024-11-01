#include<stdio.h>

int main(){
    int n,max,i_max;
    scanf("%d", &n);
    while(n!=0){
        int list[n];
        for (int i=0;i<n;i++){
            scanf("%d", &list[i]);
            if (i==0){
                max = list[i];
                i_max = i;
            } else if (list[i]>max){
                max = list[i];
                i_max = i;
            }
        }
        list[i_max] = 0;
        for (int i=0; i<n;i++){
            if (i==0){
                max = list[i];
                i_max = i;
            } else if (list[i]>max){
                max = list[i];
                i_max = i;
            }
        }
        printf("%d\n", i_max+1);
        scanf("%d", &n);
    }
}