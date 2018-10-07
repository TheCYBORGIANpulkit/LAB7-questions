#include<iostream>
using namespace std;

//to declare the function
//to take the sum of even numbers
int fx(int i, int j){
	if(i%2==0 && i<j){
		return i;
	}	
	else if(i%2==1 && i<j){
		i=i+1;
		return i;
	}
	return i+fx(i+2,j);
}
//to take the sum of odd numbers
int gx(int i, int j){
	if(i%2==1 && i<j){
		return i;
	}
	else if(i%2==0 && i<j){
		i=i+1;
		return i;	
	}
	return i+gx(i+2,j);
}
//declare the main functions
//ask the users choice
//ask and gather input
//print output statement
//call the function
int main(){
	int a,b,x;
	cout<<"What do you want to take sum of?"<< endl;
	cout<< "To take the sum of all the even numbers type 1 " <<endl;
	cout<< "To take the sum of all the odd numbers type 2 " <<endl;
	cin>>x;
		if (x==1){
		cout<<"Enter two numbers: "<< endl;
		cin>>a>>b;
		cout<<"The sum of the even numbers from "<< a <<" to "<< b <<" is "<< fx(a,b) <<endl;
		return 0;
		}
		   
		else(x==2);{
		cout<<"Enter two numbers: "<< endl;
		cin>>a>>b;
		cout<<"The sum of the odd numbers from "<< a <<" to "<< b <<" is " << gx(a,b) <<endl;
		return 0;
		}
}
