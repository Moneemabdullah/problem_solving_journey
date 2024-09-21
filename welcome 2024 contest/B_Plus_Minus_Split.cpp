//welcome:) MONEEM >|< 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<char>a;
        vector<char>b;
        int s;
        cin>>s;
        for (int i = 0; i < s; i++)
        {
            char c;
            cin>>c;
            if (c == '-')
            {
                a.push_back(c);
            }
            else
            {
                b.push_back(c);
            }
        }
        int q = a.size() - b.size();
        int p = abs(q);
        cout<<p<<endl;
    }
    
    
    return 0;
}