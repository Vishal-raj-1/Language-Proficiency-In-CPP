#include<iostream>
#include<set>
using namespace std;

int main()
{
    int q,y,x;
    set<int> s;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> y >> x;

        if(y == 1)
        {
            //insert x if x is not in set 
            s.insert(x);
        }
        else if(y == 2)
        {
            //remove x if x is present in set
            s.erase(x);
        }
        else
        {
            if(s.find(x) != s.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
