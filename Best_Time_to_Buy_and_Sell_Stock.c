#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i,j,m=0;
    int arr[a];
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++){
        for (j=i; j<a; j++){
            if (m<arr[j]-arr[i]){
                m=arr[j]-arr[i];
            }
        }
    }
    printf("%d",m);
    return 0;
}