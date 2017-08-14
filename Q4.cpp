#include <stdio.h>

int max3(int x, int y, int z) {
  if(x >= y) {

  // Write your code in this space
	if(x>=z) return x;
  } else if(y >= z) {
    return y;
  } 
  return z;
}
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", max3(x, y, z));
    return 0;
}
