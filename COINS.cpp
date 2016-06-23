#include "iostream"
#include "map"

std::map <int , long long> h;
long long f(long long n) 
{
  if (n == 0) return 0; //base
 
  long long r = h[n];
 
  if (r == 0) 
  {
    r = std::max( n , f(n/2)+f(n/3)+f(n/4) );
    h[n] = r;
  }
 
  return r;
}

int main()
{
	
    long long m,n,ans;
    while(std::cin>>n)
    {
    	std::cout<<std::max( n , f(n/2)+f(n/3)+f(n/4) )<<std::endl;
    }
  


    return 0;
}
