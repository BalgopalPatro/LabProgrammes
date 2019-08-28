#include<iostream>
using namespace std;

class Vector{
	int x,y,z;
	public :
		Vector();
		Vector(int,int,int);
		friend Vector operator -(Vector);
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

Vector operator -(Vector p){
	Vector sum(-p.x,-p.y,-p.z);
	return sum;
}

void Vector::disp(){
	cout<<"< "<<x<<" "<<y<<" "<<z<<" >";
}


int main(){
	Vector v1(4,5,6);
	Vector neg;
	neg = -v1;
	neg.disp();
	return 0;
}
