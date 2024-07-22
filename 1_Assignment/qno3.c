#include <stdio.h>

void duplicationElements(int arr[], int n){
    int count = 0;
    int max_count = 0;
    int value =arr[0];
    
    for(int i=0; i<n; i++){
        count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==value){
                count++;
                if(count > max_count)
                max_count = count;
                value = arr[j];
            }
        }
    }
    printf("The number of duplication Elements is %d\n",max_count);
    printf("The most repeating Elemnts in array is %d\n",value);
}

int main() {
    int arr[] = {10,40,35,47,68,22,40,10,98,10,50,35,68,40,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Input Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nOutput Array:\n");
    duplicationElements(arr,n);
    
    return 0;
}

