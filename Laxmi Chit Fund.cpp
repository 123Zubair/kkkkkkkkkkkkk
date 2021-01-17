/*Please enter the all input case as i have mention it in the comment
First enetr the test case as test
Second enter the Day's and Beginning amt 
Third enter the input that you want
*/



#include <bits/stdc++.h> 
using namespace std;
vector<int>v(10);
vector<int>s(10);

int main() {
	// your code goes here
	
long int T;
	
	
	cin>>T;
	
	
	
	while(T--)
	{
	   long int N,i,a;
	    
	    cin>>N>>a;
	    
	    
	    v[0]=a;
	    s[0]=a;
	    
	    for(i=1;i<N;i++)
	    {
	        v[i]=2*v[i-1];
	        
	        s[i]=s[i-1]+v[i];
	        
	    }
	   
	   cin>>i;
	   
	   cout<<v[i]<<"  "<<s[i];
	   
	    
	    
	}
	
	
	return 0;
}
