#include <iostream>
#include <string> 
using namespace std;

int main() {
	long int n;

	string s,sub;
	while(cin>>n)
	{
		cin>>sub>>s;
		size_t found=s.find(sub);
		if(found!=string::npos)cout<<found<<endl;
		while(found!=string::npos)
		{
			found=s.find(sub,found+1);
  			if (found!=std::string::npos)
    		cout <<found << '\n';
		}
		cout<<endl;
	}
	
	return 0;
}