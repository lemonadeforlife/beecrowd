#include <stdio.h>

int main() {
  float list[12][12], sum = 0.0;
  int m = 0;
  char T;
  scanf("%c", &T);
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%f", &list[i][j]);
    }
  }
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < i; j++) {
      sum += list[i][j];
      m++;
    }
  }
  if (T == 'S') {
    printf("%.1f\n", sum);
  } else {
    printf("%.1f\n", sum / (float)m);
  }
  return 0;
}
