#include <bits/stdc++.h>
using namespace std;

class mystack
{
    public:
        vector<int> v;


        void push(int val)
        {
            v.push_back(val); 
        }

        void pop()
        {
            v.pop_back();
        }

        int top()
        {
            return v.back();
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            return v.empty();
        }

};

int main() 
{
    mystack st;

    st.push(12);
    st.push(45);
    st.push(89);
    

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    // pop / top er age empty ase kina check korte hobe

    if(!st.empty()) //st.empty() == false shortcut- !st.empty()
        st.pop();
    
    if (!st.empty())
    {
        st.top();
    }
}