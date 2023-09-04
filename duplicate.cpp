#include<iostream>
#include <algorithm>
using namespace std;
void duplicate(int *arr,int n){
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			cout<<"Yes Duplicate element is present"<<endl;
			return;
		}
	}
	cout<<"No,duplicate element is not present"<<endl;
}
int main(){
	int n;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	duplicate(arr,n);
	return 0;
}