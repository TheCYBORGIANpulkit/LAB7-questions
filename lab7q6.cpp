#include<iostream>
using namespace std;

//to declare the function
//to take the sum of digits of the input
int fx(int j){
	if(j> 0 && j<10){
		cout<< j<<endl;
	}
	else if(j> 10){
		cout<< j%10;
	return fx(j/10);
	}	
}
//declare the main functions
//ask the users choice
//ask and gather input
//print output statement
//call the function
int main(){
	int n;
	cout<< "Please enter the number for which you want to write it in reverse order:"<< endl;
	cin>> n;
	cout<< "The number in the reverse order is "<< endl;
	fx(n);
	return 0;
}	
