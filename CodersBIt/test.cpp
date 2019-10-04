#include<iostream>
using namespace std;

void add(int a[1000]){
	cout<<a[0];
}

int main(){
	int a[] = {1,2,3};
	add({1,2,3});
	return 0;
}
