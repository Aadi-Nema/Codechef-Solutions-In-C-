#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 1 ; i<=t ; i++)
	{
	   int x,y;
	   cin>>x>>y;
	   int sum=x+y;
	   if(sum>6)
	   {
	       cout<<"YES"<<endl;
	   }
	   
	   else
	   {
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
