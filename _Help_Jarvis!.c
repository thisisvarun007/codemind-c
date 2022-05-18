#include<stdio.h>
int nod(int a){
    int c=0;
    if (a==0){
        return 1;
    }
    else{
        while (a){
            c+=1;
            a/=10;
        }
        return c;
    }
}
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
int main(){
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++){
        int a;
        int t=a;
        scanf("%d",&a);
        int l=nod(a);
        if (l==1){
            printf("YES
");
        }
        else{
            int arr[l],i=0;
            while (a){
                arr[i++]=a%10;
                a/=10;
            }
            sort(arr,l);
            int f=0;
            for (i=0; i<l-1; i++){
                if (arr[i+1]-arr[i]==1){
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
            if (f==1){
                printf("YES
");
            }
            else{
                printf("NO
");
            }
        }
    }
    return 0;
}