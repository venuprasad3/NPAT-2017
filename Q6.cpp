#include <stdio.h>

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
  // Write your code is this space
if(i==0)
{
  if(x[i]==y[i])
  {
    continue;
  }
  else 
  {
    return 0;
  }
}
  
  if(y[i]-x[i]==(y[i-1]))
  {
	continue;
  }
      
    else return 0;

  }
  return 1;
}
int main() {
    int n, i;
    int x[10], y[10];
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++)
        scanf("%d", &y[i]);
    
    printf("%d\n", checkAddSeq(x, y, n));
    return 0;
}
