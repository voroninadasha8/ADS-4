// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; i < j; j--) {
      if (arr[i] + arr[j] == value) {
        count;
      }
    }
  }
  return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
    int count = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i, right = len;
    while (left < right - 1) {
      int mid = (left + right) / 2;
      if (arr[i] + arr[mid] == value) {
        count += 1;
        int newmid = mid + 1;
        while (arr[i] + arr[newmid] == value && newmid < right) {
          count++;
          newmid++;
        }
        newmid = mid - 1;
        while (arr[i] + arr[newmid] == value && newmid > left) {
          count++;
          newmid--;
        }
        break;
      }
      if (arr[i] + arr[mid] > value) {
        right = mid;
      } else {
        left = mid;
      }
    }
  }
  return count;
}
