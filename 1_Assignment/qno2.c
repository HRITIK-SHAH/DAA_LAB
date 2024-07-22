 //ifind the prefix sum of an array

#include <stdio.h>

void prefixSum(int arr[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        printf("%d ", sum);
    }
}

int main() {
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Input Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nOutput Array:\n");
    prefixSum(arr, n);
    
    return 0;
}


