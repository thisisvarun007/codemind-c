#include<stdio.h>
void sort(int *arr,int a){
    int i,j;
    for (i=0; i<a; i++){
        for (j=0; j<a-1; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int index(int *arr,int a,int b){
    int res=0,i;
    for (i=0; i<a; i++){
        if (arr[i]==b){
            res=i;
            break;
        }
    }
    return res;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],temp[a],i,j;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    sort(temp,a);
    int c=0;
    for (i=0; i<a; i++){
        if (arr[i]!=temp[i]){
            c++;
            int t=arr[i];
            int ind=index(arr,a,temp[i]);
            arr[i]=arr[ind];
            arr[ind]=t;
        }
    }
    printf("%d",c);
    return 0;
}