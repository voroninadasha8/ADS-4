// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i, j;
  for (i=0; i<len; i++) {
    for (j=i+1; j<len; j++) {
      if (arr[i]+arr[j] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i, j;
  for (i=0; i<len-1; i++) [
    for (j=len-1; j>i; j--) {
      if (arr[i]+arr[j]==value) {
        count +=1;
      }
    }
  }
  return count;

}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i;
  for (i=0; i<len-1; i++) {
    int right = len;
    int left = i;
    while (right > left) {
      int middle = (left + right) / 2;
      if (arr[i] + arr[middle] == value) {
        count += 1;
        while (arr[i] +arr[middle] == value && middle < right) {
          count +=1;
          middle +=1;
        }
        while (arr[i] +arr[middle] == value && middle > left) {
          count +=1;
          middle -=1;
        }
        break;
      }
      if (arr[i] + arr[middle] > value) {
        right = middle;
      } else {
        left = middle;
      }
    }
  }
  return count;
}
