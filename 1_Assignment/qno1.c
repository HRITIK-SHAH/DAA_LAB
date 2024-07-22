//Finding the  2nd smallest and 2nd largest elements

#include<stdio.h>

int secondLargest(int arr[],int n){

int largest = arr[0];
int slargest = -1;

for(int i=0; i<n; i++){

 if(arr[i]>largest){
 slargest =  largest;
 largest = arr[i];
 }
 else{
	 if(arr[i]<largest && arr[i] > slargest){
		 slargest = arr[i];
	 }
 }
}
return slargest;
}

int main(){
int arr[] = {1,2,4,7,7,5};
int n = sizeof(arr) /sizeof(arr[0]);

int slargest = secondLargest(arr,n);
//int ssmallest = secondSmallest(arr,n);
printf("%d",slargest);
return 0;
}	

