#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node
{
    int val;
    Node *next;
};

template <class T>
class List
{
    List(int s) {size = s;};

    private:
        int size;
        T *data;
   
    ~List() {};
};


int main()
{
    int a = 2;
    int b = 3;

    int *c = new int;

    delete c;

    int *p = (int*) malloc(sizeof(int));

    free(p);

    Node *head = new Node();

    delete(head);

    vector<string> strs = {"albert", "zheng"};

    for (string s : strs)
    {
        cout << s << endl;
        string n(1,'a');
        if (s.compare(0, 1, n))
        {
            cout << "a found" << endl;
        }
    }

    return 0;
}