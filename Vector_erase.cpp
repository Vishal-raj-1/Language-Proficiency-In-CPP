#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x,a,b;
    cin >> n;

    vector<int> v;

    //1 based indexing
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
     
    cin >> x;
    //remove xth index of the vector 
    v.erase(v.begin()+x-1);
    
    cin >> a >> b;
    //remove [a,b) interval
    v.erase(v.begin() + a-1,v.begin() + b-1);

    cout << v.size() << "\n";

    for(int i = 0; i < v.size() ; i++)
    {
        cout << v[i]<< " ";
    }

    return 0;
}
