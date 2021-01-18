#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	int a[100],i,j,n,count=0;
	cout<<"Enter no of elements: ";
	cin>>n;
	cout<<"Enter the Array :-";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Common elements are :";
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cout<<a[i]<<" ";
			}
		}
	}
}
	
