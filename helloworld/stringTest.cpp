#include <iostream>
#include <vector>
#include <string>

using namespace std;

// string test(vector<string> in, int start = 0)
// {
//     if (start >= in.size())
//     {
//         std::string empty;
//         return empty;
//     }
//     string out = in[start];
//     string next = test(in, ++start);
//     if (!next.empty())
//     {
//         out += next;
//     }

//     return out;
// }

string testCombo(vector<string> in, vector<string> &output, int stringInd = 0, int charInd = 0)
{
    if (stringInd >= in.size())
    {
        std::string empty;
        return empty;
    }
  
    string out = string(1, in[stringInd][charInd]);

    for (int j = 0; j < in[stringInd].size(); j++)
    {
        string next = testCombo(in, output, ++stringInd, j);
        if (!next.empty())
        {
            out += next;
            output.push_back(out);
            out.pop_back();
        }
        else
        {
            break;
        }    
    }

    return out;
}



int main()
{
    vector<string> in = {"abc","def"};

    vector <string> output;
    //string out = test(in);

    //cout << out << endl;
    string out = testCombo(in, output);

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}