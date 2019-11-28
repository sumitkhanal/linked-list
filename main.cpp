#include "list.h"
#include <iostream>
using namespace std;
int main()
{
    List l;
    l.addToHead(5);
    l.addToHead(6);
    l.removefromHead();
    l.traverse();
}
