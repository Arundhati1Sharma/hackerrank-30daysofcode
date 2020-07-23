#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string name,email;
        cin>>name>>email;
        regex b("(.*)(@gmail.com)");
        if (regex_match(email,b))
        v.push_back(name);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
