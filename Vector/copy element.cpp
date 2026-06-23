#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> temp;

    // copy all element of v to temp
    temp = v;   

    for(int i=0; i<temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;

}