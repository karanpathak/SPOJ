#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
long int a,n,q,p;
scanf("%ld %ld",&n,&q);
vector<long int>inp;
p=n;
while(p--)
{
    scanf("%ld",&a);inp.push_back(a);
}

while(q--)
{
    scanf("%ld",&a);
    std::vector<long int>::iterator low;
    low = lower_bound(inp.begin(), inp.end(),a);
    p=low-inp.begin();
    if(p==n || inp[p]!=a)printf("-1\n");
    else
    printf("%ld\n",p);
}

return 0;
}
