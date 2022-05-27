#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    int brr[b],j;
    for (j=0; j<b; j++){
        scanf("%d",&brr[j]);
    }
    int res[a];
    for (i=0; i<a; i++){
        res[i]=-1;
    }
    for (i=0; i<a; i++){
        if (res[brr[i]]==-1){
            res[brr[i]]=arr[i];
        }
        else{
            int temp=res[brr[i]];
            res[brr[i]]=arr[i];
            for (j=brr[i]+1; j<b; j++){
                int t2=res[j];
                res[j]=temp;
                temp=t2;
            }
        }
    }
    for (i=0; i<a; i++){
        printf("%d ",res[i]);
    }
    return 0;
}