#include<iostream>
using namespace std;

class Vector{
	int x,y,z;
	public :
		Vector();
		Vector(int,int,int);
		Vector operator +(Vector);
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

Vector Vector::operator +(Vector p){
	Vector sum(x+p.x,y+p.y,z+p.z);
	return sum;
}

void Vector::disp(){
	cout<<"< "<<x<<" "<<y<<" "<<z<<" >";
}


int main(){
	Vector v1(1,2,3),v2(4,5,6);
	Vector sum;
	sum = v1+v2;
	sum.disp();
	return 0;
}
