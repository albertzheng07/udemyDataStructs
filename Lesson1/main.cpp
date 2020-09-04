#include <iostream>
#include <vector>
#include <string>

struct Rect {
    int w;
    int h;
};

struct Point{
    int x;
    int y;
};

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string match;
    
    bool matchFound = true;
    for (int i = 0; i < strs[0].size(); i++)
    {
        string s(1,strs[0][i]);
        if (strs.size() > 1)
        {                
            for (int j = 1; j < strs.size(); j++)
            {
                string comp(1,strs[j][i]);
                if (s.compare(0,1,comp) != 0)
                {
                    matchFound = false;                        
                    break;
                }
            }
            if (matchFound)
            {
                match.push_back(s[0]);
            }
            else
            {
                break;
            }
        }
        else
        {
            match = strs[0];
        }
    }
    return match;         
}

int main()
{
    int A[5];

    int B[5] = {1,3,5,6};

    int a;

    //cout << sizeof(a) << endl;

    Point p1 = {.x = 1, .y = 3};

    vector<string> strs = {"flop", "flower","flim"};

    string out = longestCommonPrefix(strs);

    cout << out;

    // string s = "f";

    // string t = "f";

    // if(s.compare(0, 1, t) == 0)
    // {
    //     cout << "true";
    // }

    return 0;
}