#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, q, size, value, which, index;
    cin >> n >> q;
    
    vector<vector<int>> nvec;
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> size;
        vector<int> ivec;
        
        for (int j = 0; j < size; ++j) 
        {
            cin >> value;
            ivec.push_back(value);
        }
        
        nvec.push_back(ivec);
    }
    
    for (int k = 0; k < q; ++k) 
    {
        cin >> x >> y;
        cout << nvec[x][y] << "\n";
    }
    
    return 0;
}