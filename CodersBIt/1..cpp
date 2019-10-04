#include<stdio.h>

int main(){
	int a[] = {2,2,7,15} ;
	
	int i,j,k,l;
	int m = 0;
	int b;
	for(i=0;i<4;i++)
	{
		for(j=i+1 ; j<4 ; j++)
		{
			for(k=j+1 ; k<4 ; k++)
			{
				for(l=k+1 ; l<4 ; l++)
				{
					b = i & j & k & l ;
					if(m<b)
					{
						m = b ;
					}
				}
			}	
		}
	}
	printf("%d",m);
}
