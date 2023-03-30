// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i, j;
  for (i = 0; i < len - 1; i++) {
    for (j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count +=1;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i, j;
  for (i = 0; i < len - 1; i++) {
    for (j = len - 1; i < j; j--) {
      if (arr[i] + arr[j] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int i;
  for (i = 0; i < len - 1; i++) {
    int left = i, right = len;
    while (left < right - 1) {
      int center = (left + right) / 2;
      if (arr[i] + arr[center] == value) {
        count += 1;
        int newcenter = center + 1;
        while (arr[i] + arr[newcenter] == value && newcenter < right) {
          count += 1;
          newcenter += 1;
        }
        newcenter = center - 1;
        while (arr[i] + arr[newcenter] == value && newcenter > left) {
          count += 1;
          newcenter -= 1;
        }
        break;
      }
      if (arr[i] + arr[center] > value) {
        right = center;
      } else {
        left = center;
      }
    }
  }
  return count;
}
