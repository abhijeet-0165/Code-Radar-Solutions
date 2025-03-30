// Your code here...
// Your code here...
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // Sorting in descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int printArray(char arr[], int n) {  // Changed return type to void
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print value, not address
    }
    printf("\n");
}