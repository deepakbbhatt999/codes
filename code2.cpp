#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	float a[100],i,temp,j,n,mid;
	float median;
	cout<<"Enter no of elements to be inserted: ";
	cin>>n;
	cout<<"Enter the Array :-";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	mid=n/2;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(a[j]>a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}

	}
}
if (n % 2==0)
	    {
	        median = (a[mid] + a[mid + 1]) / 2;
	        cout << "The median is: " << median << endl;
	    }
	    else
	    {
	        cout << "The median is: " << median << endl;

	    }
	
}
