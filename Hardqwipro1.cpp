#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int n;
	
	cin>>n;
	
	int m1,p1;
	
	cin>>m1>>p1;
	
	int m2,p2;
	
	cin>>m2>>p2;
	
	int i,j,k=0,l=0;
	
	int a1[10],s1[10];
	
	for(i=3;i<=n;i+=3)
	{  
	    a1[k++]=i;
	    s1[l++]=p1*l;
	    
	}
	
	int a2[10],s2[10];
	l=0;
	k=0;
	
		for(i=4;i<=n;i+=4)
	{  
	    a2[k++]=i;
	    s2[l++]=p2*l;
	}
k=0;
int sum[4];

for(i=0;i<6;i++)
{
    for(j=0;j<4;j++)
    {
        if((a1[i]+a2[j])==n)
        {
            sum[k++]=(s1[i]+s2[j]);
        }
    }
}

int min;
min=sum[0];

for(i=1;i<2;i++)
{
    if(min>sum[i])
    min=sum[i];
}

cout<<"Final"<<min;
	return 0;
}
