#include<iostream>
using namespace std;

class stda{
	public:
		int r;
		void asd();
};

void stda::asd(){
	cout<<r;
}

int main()
{
	stda d;
	stda *f;
	f = &d;
	cin>>d.r;
	cout<< f->r;
	f->asd();
	return 0;
}
