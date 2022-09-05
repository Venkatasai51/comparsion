#include<iostream>
int main(){
	int a=5,b=6,c=7,d=8;
	{ if(a>b &&a>c &&a>d){
		std:: cout<<"here a is greater="<<a;
	}
	else if(b>a && b>c && b>d)
	{
		std:: cout<<"here b is greater="<<b;
	}else if(c>a && c>b && c>d)
	{
		std:: cout<<"here c is greater";
	}
	else
	{std:: cout <<"here d is greater";}
	
	}
	return 0;
}
