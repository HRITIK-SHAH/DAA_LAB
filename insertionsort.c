#include <stdio.h>
#include <stdlib.h>


void insertionSort(int arr[], int n) {
    int count_for = 0;
    for (int i = 1; i < n; i++) {
    count_for++;
    printf("\n %d pass of for LOOP \n",count_for);
        int key = arr[i];
        int j = i - 1;

            int count_while =0;
        while (j >= 0 && arr[j] > key) {
            count_while ++;
            arr[j + 1] = arr[j];
            j--;
            
        }
        printf("Number of While loop Running = %d\n",count_while);
        arr[j + 1] = key;
    }
}

void generateBestCase(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
}

void generateWorstCase(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }
}

void generateAverageCase(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;
    int bestCase[n], worstCase[n], averageCase[n];

    generateBestCase(bestCase, n);
    printf("\nBest case before sorting:\n");
    printArray(bestCase, n);
    insertionSort(bestCase, n);
    printf("Best case after sorting:\n");
    printArray(bestCase, n);

    generateWorstCase(worstCase, n);
    printf("Worst case before sorting:\n");
    printArray(worstCase, n);
    insertionSort(worstCase, n);
    printf("Worst case after sorting:\n");
    printArray(worstCase, n);

    generateAverageCase(averageCase, n);
    printf("Average case before sorting:\n");
    printArray(averageCase, n);
    insertionSort(averageCase, n);
    printf("Average case after sorting:\n");
    printArray(averageCase, n);

    return 0;
}

