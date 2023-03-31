// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  int count1 = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count1 +=1;
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
    int right = len, left = i;
    while (right - 1 > left) {
      int mid = (left + right) / 2;
      if (arr[i] + arr[mid] == value) {
        count3++;
        int newmid = mid + 1; 
        while (arr[i] + arr[newmid] == value && newmid < right) {
          count3++;
          newmid++;
        }
        newmid = mid - 1;
        while (arr[i] + arr[newmid] == value && newmid > left) {
          count3++;
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
  return count3;
}
