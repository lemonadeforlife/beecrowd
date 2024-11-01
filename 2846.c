#include <stdio.h>

int main() {
  int fibonot[100000], n;
  for (int i = 0, p = 0, c = 1, num = 1, index = 0; index < 100000; i++) {
    i = p + c;
    p = c;
    c = i;
    if (num < i) {
      for (int j = num; j < i; j++) {
        num = j;
        if (index > 100000)
          break;
        fibonot[index] = j;
        index++;
      }
      num = i;
    }
    num++;
  }
  scanf("%d", &n);
  printf("%d\n", fibonot[n - 1]);
  return 0;
}
