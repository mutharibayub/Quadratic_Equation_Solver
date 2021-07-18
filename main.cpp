//Mutharib(i200476) assignment 1

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	float a,b,c,R,X1,X2;	//a,b and c are the coefficients in a quadratic equation,X1 and X2 are the solutions to that equation, R is the discriminant of that equation
	cout<<"Enter values of a,b and c respectively (separated by a space): ";	
	cin>>a>>b>>c;		//Taking input for the coefficients in quadratic eq.
	R=sqrt(pow(b,2)-4*a*c);		//Calculating the discriminant using formula
	X1=((-b+R)/(2*a));		//Finding the first value of X	
	X2=((-b-R)/(2*a));		//Finding the second value of X
	cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl;		//Printing values of a,b and c	
	cout<<"X1="<<X1<<",X2="<<X2<<endl;		//Printing values of X that were sound 	
	
	return 0;
}
