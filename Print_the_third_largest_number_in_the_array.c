//quick sort
#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int part(int *arr,int l,int h){
	int p=h,i,j=l;
	for (i=l; i<p; i++){
		if (arr[i]<arr[p]){
			swap(&arr[i],&arr[j]);
			j++;
		}
	}
	swap(&arr[j],&arr[p]);
	return j;
}
void quick(int *arr,int l,int h){
	int p;
	if (l<h){
		p=part(arr,l,h);
		quick(arr,l,p-1);
		quick(arr,p+1,h);
	}
}
int main(){
	int a;
	scanf("%d",&a);
	int arr[a],i,j;
	for (i=0; i<a; i++){
		scanf("%d",&arr[i]);
	}
	quick(arr,0,a);
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
	    printf("It is not possible");
	}
	else{
	    printf("%d",srr[c-2]);
	}
	return 0;
}