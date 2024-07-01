#include<iostream>
using namespace std;
int main(){
	int n, i;
	cout<<"ingrese la cantidad de valores: "; cin>>n;
	int*a=new int[n];
	int s=0;
	float c=0;
	for(int i=0; i<n; i++){
		cout<<"ingrese el elemento: "; cin>>a[i];
		s=s+a[i];
		if(a[i]==0){
			c=c+1;
		}
	}
	float p=(c/n)*100;
	cout<<"la sumatoria es "<<s<<endl;
	cout<<"el porcentaje es "<<p<<"%"<<endl;		
	return 0;
}