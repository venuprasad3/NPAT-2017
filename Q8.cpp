#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
#include<algorithm>

void mostFreq3(int *a, int n, int b[3]) {

 sort(a,a+n);
 int res[n],cou[n];
 int i,t,j,c=0,k=0;
 int one=0,two=0,th=0;
 for(i=0;i<n;i=i+c)
 {
   t = a[i];
   c = 0;
   for(j=i;j<n;j++)
   {
     if(t == a[j])
     {
       c++;
     }

   }
   res[k] = t;
   cou[k] = c;
   k++;
 }


for(i=0;i< k;i++)
    {
        for(j=i+1;j< k;j++)
        {
            if(cou[i]< cou[j])
            {
                t    =cou[i];
                cou[i]  =cou[j];
                cou[j]  =t;
                t   =res[i];
                res[i]  =res[j];
                res[j]  =t;
            }
        }
    }
    b[0] = res[0];
    b[1] = res[1];
    b[2] = res[2];





}
int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

	return 0;
}
