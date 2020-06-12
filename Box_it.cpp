#include<iostream>
#include<sstream>
using namespace std;

class Box
{
private :
    int l,b,h;
public :
    Box()
    {
        l = b = h = 0;
    }

    Box(int L,int B,int H)
    {
        l = L ;
        b = B;
        h = H;
    }

    Box(const Box &B)
    {
        l = B.l ;
        b = B.b ;
        h = B.h;
    }

    int getLength()
    {
        return l;
    }

    int getBreadth()
    {
        return b;
    }

    int getHeight()
    {
        return h;
    }

    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }

    bool operator < (Box &B)
    {
        if(l < B.l)
            return true;
        else if(l == B.l && b < B.b)
            return true;
        else if(l == B.l && b == B.b && h < B.h)
            return true;
        else
            return false;
    }

    friend ostream& operator << (ostream& out,const Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

void check2()
{
    int n;
    cin >> n;
    Box temp;

    for(int i=0; i<n; i++)
    {
        int type;
        cin >> type;

        if(type == 1)
        {
            cout << temp << "\n";
        }
        else if(type == 2)
        {
            int l,b,h;
            cin >> l >> b >> h;
            Box NewBox(l,b,h);
            temp = NewBox;
            cout << temp << "\n";
        }
        else if(type == 3)
        {
            int l,b,h;
            cin >> l >> b >> h;
            Box NewBox(l,b,h);

            if(NewBox < temp)
            {
                cout << "Lesser\n" ;
            }
            else
            {
                cout << "Greater\n";
            }
        }
        else if(type == 4)
        {
            cout << temp.CalculateVolume() << "\n";
        }
        else
        {
            Box NewBox(temp);
            cout << NewBox << "\n";
        }
    }
}

int main()
{
    check2();
    return 0;
}