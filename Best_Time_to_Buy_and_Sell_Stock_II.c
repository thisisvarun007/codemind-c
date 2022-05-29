#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int m=0;
    for (i=1; i<a; i++){
        if (arr[i]-arr[i-1]>0){
            m+=arr[i]-arr[i-1];
        }
    }
    printf("%d",m);
    return 0;
}