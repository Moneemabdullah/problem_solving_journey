#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string a, b;
        cin>>a>>b;
        int flag = 1;
        int x = size(a);
        int y = size(b);
        char ar[26] = {0};
        char br[26] = {0};
        if (x == y)
        {
            for (int i = 0; i < x; i++)
            {
                int val = a[i]-'a';
                ar[val] ++;
            }
            for (int i = 0; i < y; i++)
            {
                int val = b[i]-'a';
                br[val] ++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (ar[i] != br[i])
                {
                    flag = 0;
                }
                
            }
            
        }
        else
        {
            flag = 0;
        }

        if (flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
//welcome:) MONEEM >|< 

#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  return 0;
}
class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};