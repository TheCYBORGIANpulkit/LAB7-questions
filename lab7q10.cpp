#include<iostream>
using namespace std;

int fx(int j){
	if(j==0){
		return 1;
	}
	else if(j==1){
		return 2;
	}
	return fx(j-1)+ fx(j-2);
}
//declare the main functions
//ask and gather input
//print output statement
//call the function	
int main(){
	int n;
	cout<<" Hello, We are here to generate the nth term of the Fibonacci Sequence. Please enter the serial no. of the term you want to see "<<endl;
	cin>> n;
	cout<<"Your "<< n<< "th term of the Fibonacci sequence is "<< fx(n)<<endl;
	return 0;
}
