#include <iostream>
#include "myStack_arr.h"
using namespace std;

int main ()
{   myStack_arr s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.print();
    s1.push(4);
    s1.top();
    s1.size_of();
    s1.pop();
    s1.size_of();
    s1.top();
    s1.pop();
    s1.size_of();
    s1.top();
    s1.pop();
    s1.size_of();
    s1.pop();
    s1.size_of();
    s1.push(5);
    s1.print();
return 0;
}
