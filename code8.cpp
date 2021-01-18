#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	int a[100],i,j,n,x,y;
	int dist;
	cout<<"Enter no of elements: ";
	cin>>n;
	cout<<"Enter the Array :-";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
    cout<<"Enter 2 elements: ";
    cin>>x>>y; //the elements between which minimum distance is to be found
    dist = INT_MAX;
    for(int i=0; i<n; i++) //select one element
    {  
      for(int j=i+1; j<n; j++) //traverse ahead
      {
        if(a[i] == x and a[j] == y) // if we get X and Y we try to update the minimum distance
        dist = min(dist , abs(i-j));
        if(a[i] == y and a[j] ==x)
        dist = min(dist , abs(i-j));          
      }
    }
    cout<<dist;
  return 0;
}
