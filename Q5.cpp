#include <iostream>

using namespace std;

int maxConsecutive(int *a, int n, int m) {
  int sum = 0;
  for(int i = 0; i < m; i++) {
    sum += a[i];
  }
  int max = sum;
  for(int i = m; i < n; i++) {
sum = sum + a[i]-a[i-n+(n-m)];
if(sum > max )
  max = sum ;

  }
  return max;
}
int main() {
    int n, m;
    int a[10];
    int i;
    
    cin >> n;
    cin >> m;
    for(i=0; i<n; i++)
      cin >> a[i];
    cout << maxConsecutive(a, n, m) << endl;
    
    return 0;
}
