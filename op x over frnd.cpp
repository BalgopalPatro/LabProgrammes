#include<iostream>
using namespace std;

class Vector{
	int x,y,z;
	public :
		Vector();
		Vector(int,int,int);
		friend Vector operator *(Vector,Vector);
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

Vector operator *(Vector p,Vector q){
	Vector sum(q.x*p.x,q.y*p.y,q.z*p.z);
	return sum;
}

void Vector::disp(){
	cout<<"< "<<x<<" "<<y<<" "<<z<<" >";
}


int main(){
	Vector v1(1,2,3),v2(4,5,6);
	Vector mul;
	mul = v1*v2;
	mul.disp();
	return 0;
}
