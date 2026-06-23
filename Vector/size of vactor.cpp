#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;  

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    // v.size() = elements in the vector
      cout<<v.size()<<endl;  // 3
   
   for(int i=0; i<v.size(); i++)
   {
         cout<<v[i]<<endl;
   }
}