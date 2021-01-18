#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	int a[100],i,temp,j,n;
	cout<<"Enter no of elements to be inserted: ";
	cin>>n;
	cout<<"Enter the Array :-";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		
		if(a[i]<a[j]){
		cout<<a[j]<<endl;
			break;
		}
	//
		//
	}
}
}
