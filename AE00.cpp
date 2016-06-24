/*
Rectangles

@kp1994
Language : c++14

*/
#include <iostream>
using namespace std;

int main() {
	int n,i,j;long long ans=0;
	cin>>n;
	for(i=1;n/i>=i;i++)
	{
		for(j=i;i*j<=n;j++)
		{
			ans+=1;
		}
		
	}
	cout<<ans;
	return 0;
}