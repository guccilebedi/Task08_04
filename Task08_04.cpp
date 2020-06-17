#include <iostream>
#include <list>
#include <iterator>
using namespace std;

list<int> removeNegative(list<int> initLst) 
{
    list<int> resLst;
    list<int> :: iterator el;
    for (el = initLst.begin(); el != initLst.end(); el++)
    {
        if (*el >= 0) 
        {
            resLst.push_back(*el);
        }
    }
    return resLst;
}

void printList(list<int> lst)
{
    list<int> :: iterator el;
    for (el = lst.begin(); el != lst.end(); el++)
    {
        cout << *el;
    }
}

int main()
{
    list<int> initLst;
    initLst.push_back(-1);
    initLst.push_back(1);
    initLst.push_back(-2);
    initLst.push_back(2);
    initLst.push_back(-3);
    initLst.push_back(3);
    list<int> resLst = removeNegative(initLst);
    printList(resLst);
}