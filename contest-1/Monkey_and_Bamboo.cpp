#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int H,a,b;
        cin>>H>>a>>b;
        int min =0;
        int p = 0;
        int x = a-b;
        if (b>=a && H>a)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            int r = H/x;
            min = r*2;
            cout<<min<<endl;
        }
        
    }
    
    return 0;
}
