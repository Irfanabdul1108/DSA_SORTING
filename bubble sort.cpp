void bubbleSort(int arr[], int n) {
  if (n == 1)
    return;
  int sw = 0;
  for (int j = 0; j < n - 1; ++j) {
    if (arr[j] > arr[j + 1]) {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;

      sw = 1;
    }
  }
  if (sw == 0)
    return;
  bubbleSort(arr, n - 1);
}