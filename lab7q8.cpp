#include<iostream>
using namespace std;

//to declare the function
//to take the sum of digits of the input
int fx(int j){
	if(j> 0 && j<10){
		return j;
	}
	else{
		return (j%10) + fx(j/10);
	}
}
//declare the main functions
//ask the users choice
//ask and gather input
//print output statement
//call the function
int main(){
	int n;
	cout<< "Please enter the number for which you want to take the sum of the digits:"<< endl;
	cin>> n;
	cout<< "The sum of the digits of the number "<< n <<" is "<< fx(n) << endl; 
	return 0;
}	
