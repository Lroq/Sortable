#include <stdio.h>

void quick_sort(int arr[], int low, int high);
void merge_sort(int arr[], int left, int right);
void bubble_sort(int arr[], int n);
void insertion_sort(int arr[], int n);

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {5, 3, 8, 4, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array (Quick Sort): ");
    print_array(arr1, n1);
    quick_sort(arr1, 0, n1 - 1);
    printf("Sorted array: ");
    print_array(arr1, n1);

    int arr2[] = {12, 11, 13, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nOriginal array (Merge Sort): ");
    print_array(arr2, n2);
    merge_sort(arr2, 0, n2 - 1);
    printf("Sorted array: ");
    print_array(arr2, n2);

    int arr3[] = {64, 34, 25, 12, 22};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("\nOriginal array (Bubble Sort): ");
    print_array(arr3, n3);
    bubble_sort(arr3, n3);
    printf("Sorted array: ");
    print_array(arr3, n3);

    int arr4[] = {12, 11, 13, 5, 6};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("\nOriginal array (Insertion Sort): ");
    print_array(arr4, n4);
    insertion_sort(arr4, n4);
    printf("Sorted array: ");
    print_array(arr4, n4);

    return 0;
}
