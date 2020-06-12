#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> parseInts(string str)
{
    //Copy the String content in Stream
    stringstream ss(str);
    char ch;
    int temp;

    vector<int>result;

    //To collect int , it fail when it get '\0' at the end of the string
    while(ss >> temp)
    {
        result.push_back(temp);

        //To remove comma(,)
        ss >> ch;
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i=0; i<integers.size(); i++)
        cout << integers[i] << "\n";

    return 0;
}