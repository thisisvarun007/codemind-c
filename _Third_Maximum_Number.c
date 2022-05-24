//third max
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
int main(){
	int a;
	scanf("%d",&a);
	int arr[a],i,j;
	for (i=0; i<a; i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,a);
	for (i=0; i<a; i++){
	    for (j=0; j<a; j++){
	        if (i!=j){
	            if (arr[i]==arr[j] && arr[i]!=-1){
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
	int srr[c],k=0;
	for (i=0; i<a; i++){
	    if (arr[i]!=-1){
	        srr[k++]=arr[i];
	    }
	}
	if (c<3){
	    printf("%d",srr[c-1]);
	}
	else{
	    printf("%d",srr[c-3]);
	}
	return 0;
}