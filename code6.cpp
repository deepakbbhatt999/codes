#include <iostream>
using namespace std;
int main() {
   int a[] = {1, 2, 3, 4, 5, 6};
   int i, d=3, n=6, j;
   int temp=0;
   cout<<"Enter the value of d";
   cin>>d;
   for (i = 0; i < d; i++) {
      int x = a[0];
      for (j = 0; j < n; j++) {
         temp=a[j];
         a[j] = a[j + 1];
         a[j+1]=temp;
      }
      a[n - 1] = x;
   }
   for (i = 0; i < n; i++) {
      cout<< a[i]<<"\t";
   }
}
