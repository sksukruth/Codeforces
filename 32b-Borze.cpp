#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    string q;
    cin>>q;
    for(int i=0;i<q.size();i++)
    {
        if(q[i]=='-' && q[i+1]=='.')
        {
            a.push_back(1);
            ++i;
        }
        else if(q[i]=='-' && q[i+1]=='-')
        {
            a.push_back(2);
            ++i;
        }
        else if(q[i]=='.')
        {
            a.push_back(0);
        }
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i];
}

