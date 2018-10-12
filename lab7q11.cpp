#include<iostream>
using namespace std;

//to declare the function
//to take the GCD of the two numbers
int fx(int i, int j){
	if(j%i==0){
		return i;
	}
	else{
		return fx(j%i , i);
	}
}
//declare the main functions
//ask and gather input
//print output statement
//call the function	
int main(){
	int a,b;
	cout<<" Hello, We are here to find the GCD of two numbers. Please enter the numbers in increasing order: "<<endl;
	cin>> a>>b;
	cout<< "The GCD of the two numbers "<< a << " and " << b << " is " << fx(a,b) <<endl;
	return 0;
}  
