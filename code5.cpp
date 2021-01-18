#include<iostream>
//#include<stdio>
//#include<conio>
using namespace std;
int main()
{
	int a[100],a1[100],a2[100],i,temp,j,n,n1,n2;
	cout<<"Enter no of elements to be inserted for array 1: ";
	cin>>n;
	cout<<"Enter the Array :-";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Enter no of elements to be inserted for array 2: ";
	cin>>n1;
	cout<<"Enter the Array :-";
	for(i=0;i<n1;i++){
		cin>>a1[i];
	}
	cout<<"Union: ";
	i=0;
	j=0;
	while (i < n && j < n1) 
  { 
    if (a[i] < a1[j]) 
       cout << a[i++] << " "; 
      
    else if (a1[j] < a[i]) 
       cout << a1[j++] << " "; 
      
    else
    { 
       cout << a1[j++] << " "; 
       i++; 
    } 
  } 
  while(i < n1) 
 {
	     cout << a[i++] << " "; 
}
  while(j < n) {
  
    cout << a1[j++] << " "; 
}

  cout<<"Intersection: ";
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
		
		if(a[i]==a1[j]){
			cout<<a[i]<<" ";
	}
		}
	}

		
}
