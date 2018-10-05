#include<iostream>
using namespace std;

//declaring the function
int fx(int i, int j){
		if(j==0){
			return 1;
		}
		else{
			return i*fx(i,j-1);
		}
}
int main(){
	int a,b;
		fx(a,b);
		cout<<" We wil calculate a^b.Enter any two numbers a,b :"<<endl;
		cin>> a >> b;
		cout<<"the value of "<< a <<"^"<< b <<" is "<< fx(a,b) << endl;
		return 0;
}
	
