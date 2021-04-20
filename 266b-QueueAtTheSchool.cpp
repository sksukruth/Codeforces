#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n,t;
    string a;
    cin>>n>>t>>a;
    while(t--)
    {
        for(int i=1;i<n;++i)
        {
            if(a[i]=='G'&& a[i-1]=='B')
            {
                a[i]='B';
                a[i-1]='G';
                ++i;
            }
        }
    }
    cout<<a<<endl;
}
