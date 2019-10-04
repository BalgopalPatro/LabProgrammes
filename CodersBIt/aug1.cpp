#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		int b[n];
		int m = 0;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		for(i=0;i<n;i++){
			a[i] = (a[i]*20) - (b[i]*10);
			if(a[i]<0)
				a[i] = 0;
			if(m<a[i])
				m = a[i];
		}
		cout<<m;
	}
	return 0;
}
