#include <iostream>
#include <string.h>
using namespace std;

int main() {
float res,c,i;
cin>>c;
while(c!=0.00)
{
i=1;
res=(float)1/(i+1);
while(res<c)
{ i++;
	res+=(float)1/(i+1);
}
cout<<i<<" card(s)"<<endl;
cin>>c;
}
	return 0;
}