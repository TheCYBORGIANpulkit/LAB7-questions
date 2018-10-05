#include<iostream>
using namespace std;

int fx(int j){
	if(j==0){
		return 0;
	}	
	return j+fx(j-1);
}
//declare the main functions
//ask the users choice
//ask and gather input
//print output statement
//call the function
int main(){
	int n;
	cout<<"We are here to find the sum of numbers from 1 to n. Enter any natural number: "<<endl;
	cin>> n;
	cout<< "The sum of numbers from 1 to "<< n <<" is "<< fx(n) <<endl;
	return 0;
}

