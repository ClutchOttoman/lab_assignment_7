#include <stdio.h>
void bubbleSort(int arr[], int n, int count[]) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        count[j]++;
      }
    }
  }
}
int main() {
  int arr[] = {97,16,45,63,13,22,7,58,72};
  int n = 9,i;
  int changeCount[n];
  for(i=0; i<n;i++){
     changeCount[i] = 0;
  }
  bubbleSort(arr, n, changeCount);
  for(i=0;i<n;i++){
    printf("Swaps for index %d: %d \n", i, changeCount[i]);
  } 
  return 0;
}
