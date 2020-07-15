#include <bits/stdc++.h>

using namespace std;



int main()
{   int count=0,x;
    cin>>x;
    while(x!=0){
        x=(x&(x<<1));
        count++;
    }
    cout<<count;
    return 0;
}
