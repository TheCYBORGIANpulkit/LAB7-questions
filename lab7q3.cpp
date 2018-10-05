#include<iostream>
using namespace std;

//declaring the function
//to print even numbers in range
int fx(int i, int j){
	if(i%2==0 && i<j){
		cout<< i << endl;
		return fx(i+2,j);
	}
	else if(i%2==1 && i<j){
		i=i+1;
		cout<< i << endl;
		return fx(i+2,j);	
	
	}
}
//to print odd numbers in the range
int gx(int i, int j){
	if(i%2==1 && i<=j){
		cout<< i << endl;
		return fx(i+2,j);
	}
	else if(i%2==0 && i<=j){
		i=i+2;
		cout<< i << endl;
		return gx(i+2,j);	
	}
}
//declare the main functions
//ask the users choice
//ask and gather input
//print output statement
//call the function
int main(){
	int a,b,x;
	cout<<"What do you want to print?"<< endl;
	cout<< "To print all the even numbers type 1 " <<endl;
	cout<< "To print all the odd numbers type 2 " <<endl;
	cin>>x;
		if (x==1){
		cout<<"Enter two numbers: "<< endl;
		cin>>a>>b;
		cout<<"The even numbers from "<< a <<"to"<< b <<" are "<<endl;
		fx(a,b);
		return 0;
		}
		   
		else(x==2);{
		cout<<"Enter two numbers: "<< endl;
		cin>>a>>b;
		cout<<"The odd numbers from "<< a <<" to "<< b <<" are " <<endl;
		gx(a,b);
		return 0;
		}  
}	
