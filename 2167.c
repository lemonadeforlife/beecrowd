#include <stdio.h>

int main() {
  int t, b = 0;
  scanf("%d", &t);
  int speed_tracker[t];
  for (int i = 0; i < t; i++)
    scanf("%d", &speed_tracker[i]);
  for (int i = 0; i < t; i++)
    if (speed_tracker[i] < speed_tracker[i - 1] && i > 0) {
      printf("%d", i + 1);
      return 0;
    }
  printf(0);
  return 0;
}
