#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char c[100001];
		long int n,i,j,d = 0;
		cin>>c;
		n = strlen(c);
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++){
				if (c[j] == '1'){
					c[j] ='2';
					{
					if(c[j-1] == '1')
						c[j-1] = '0';
					else if (c[j-1] == '0')
						c[j-1] = '1';
					}
					{
					if(c[j+1] == '1')
						c[j+1] = '0';
					else if (c[j+1] == '0')
						c[j+1] = '1';
					}
					
				}
			}
		}
		cout<<c;
		for(i=0;i<n;i++){
			if(c[i] != '2'){
				d = 1;
				break;	
			}
		}
		
		if (d == 1)
		{
			cout<<"LOSE\n";
		}
		else
		{
			cout<<"WIN\n";
		}
		
	}
	return 0;
}
