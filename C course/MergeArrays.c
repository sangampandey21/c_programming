#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
        
     merged[k++] = arr1[i++];
        } else {
     merged[k++] = arr2[j++];
        }
    }
 while (i < n1) {
        merged[k++] = arr1[i++];
    }
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}
int main() {
    int n1, n2, i;
    printf("Enter the elements in the 1st sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the 1st sorted array: \n");
    for (i = 0; i < n1; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in the 2nd sorted array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of the 2nd sorted array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d",&arr2[i]);
    }

    int merged[n1+n2];
    mergeArrays(arr1, n1,arr2,n2,merged);
    printf("The merged sorted array is: \n");
    for (i = 0; i< n1 + n2; i++) {
        printf("%d",merged[i]);
    }
    printf("\n");

    return 0;
}
