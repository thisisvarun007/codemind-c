#include<stdio.h>
int count(int *ar,int a){
    int i,j,arr[a];
    for (i=0; i<a; i++){
        arr[i]=ar[i];
    }
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            if (i!=j){
                if (arr[i]==arr[j]){
                    arr[j]=-1;
                }
            }
        }
    }
    int c=0;
    for (i=0; i<a; i++){
        if (arr[i]!=-1){
            c++;
        }
    }
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int dis=count(arr,a);
    while(dis--){
        int c=0,min=1000;
        for (i=0; i<a; i++){
            if (min>arr[i] && arr[i]>0){
                min=arr[i];
            }
        }
        for (i=0; i<a; i++){
            if (arr[i]>=min){
                c++;
            }
        }
        for (i=0; i<a; i++){
            if (arr[i]==min){
                arr[i]=-1;
            }
        }
        printf("%d
",c);
    }
    return 0;
}