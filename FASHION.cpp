#include<iostream>
#include<algorithm>    //for using sort function
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        int men[n],women[n];
        for(i=0;i<n;i++)
            cin>>men[i];
        for(i=0;i<n;i++)
            cin>>women[i];
        sort(men,men+n);  //sorts array 'men' from zeroth to ppl-1 th index
        sort(women,women+n);
        long long ans=0;
        for(i=0;i<n;i++)
            ans+=men[i]*women[i]; //hotness maximised
        cout<<ans<<endl;
    }
    return 0;
}