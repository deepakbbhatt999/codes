#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	int a[100],i,temp,j;
	cout<<"Enter the Array :-";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		if(a[j]>a[j+1]){
		
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}

	}
}
	cout<<"First Smallest Element is:-"<<a[0]<<endl;
	cout<<"Second Smallest Element is:-"<<a[1];
	return 0;
}
