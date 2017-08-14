#include <stdio.h>

int num[3]={
1,2,1
};

int triangleType_bad(int a, int b, int c) {
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}

int triangleType_good(int a, int b, int c) {
  if((a == c) && (b != a) && (a <= b+c) && (b <= a+c) && (c <= a+b))
    return 0;
    
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}


int main() {
    
    if(triangleType_bad(num[0], num[1], num[2]) != triangleType_good(num[0], num[1], num[2]))
        printf("correct\n");
    else
        printf("wrong\n");
   
    return 0;
}
