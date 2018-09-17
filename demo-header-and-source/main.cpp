#include <iostream>

using namespace std;

#include "utils.h"
//int permutation(int,int); //just inform what permutation is and not how it exactly works

int main()
{
    int n,r;
    cout<<"enter n and r? ";
    cin>>n>>r;

    int p= permutation(n,r);

    cout<<n<<" P "<<r<<" is "<<p<<endl;
    return 0;
}
