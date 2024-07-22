#include <stdio.h>

void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void ROTATE_RIGHT(int *p1, int p2) {
    if (p2 <= 1) {
        return;
    }

    int last = p1[p2 - 1];

    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(&p1[i], &p1[i - 1]);
    }

    p1[0] = last;
}

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int N = sizeof(arr) / sizeof(arr[0]);
    int p2 = 5;

    printf("Before ROTATE:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ROTATE_RIGHT(arr, p2);

    printf("After ROTATE:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

