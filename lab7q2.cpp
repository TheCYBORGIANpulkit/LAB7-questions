#include<iostream>
using namespace std;
void fun(int n){
	if(n>0){
		fun(n-1);
		cout<< n <<endl;
	}
}
int main(){
	int n;
	cout<<"Enter any number:"<<endl;
	cin>> n;
	cout<<"The natural numbers from 1 to "<< n <<" are"<<endl;
	fun(n);
	return 0;
} 
