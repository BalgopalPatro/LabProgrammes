#include<iostream>
using namespace std;

class Vector{
	int x,y,z;
	public :
		Vector();
		Vector(int,int,int);
		Vector operator -();
		void disp();
};

Vector::Vector(){
	x = 0;
	y = 0;
	z = 0;
}
Vector::Vector(int a,int b,int c){
	x = a;
	y = b;
	z = c;
}

Vector Vector::operator -(){
	Vector sum(-x,-y,-z);
	return sum;
}

void Vector::disp(){
	cout<<"< "<<x<<" "<<y<<" "<<z<<" >";
}


int main(){
	Vector v1(1,2,3);
	Vector oppo;
	oppo = - v1;
	oppo.disp();
	return 0;
}
