// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  int count1 = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count1 += 1;
      }
    }
  }
  return count1;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count2 = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; i < j; j--) {
      if (arr[i] + arr[j] == value) {
        count2 += 1;
      }
    }
  }
  return count2;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int count3 = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i, right = len;
    while (left < right - 1) {
      int center = (left + right) / 2;
      if (arr[i] + arr[center] == value) {
        count3 += 1;
        int newcenter = center + 1;
        while (arr[i] + arr[newcenter] == value && newcenter < right) {
          count3 += 1;
          newcenter += 1;
        }
        newcenter = center - 1;
        while (arr[i] + arr[newcenter] == value && newcenter > left) {
          count3 += 1;
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
  return count3;
}
