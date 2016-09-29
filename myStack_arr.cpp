#include <iostream>
#include "myStack_arr.h"
using namespace std;

myStack_arr::myStack_arr()
    {size=0;}

bool myStack_arr::empty()
    {if (size==0)
        return true;
    else
        return false;}

bool myStack_arr::full()
    {if (size==MS)
        {return true;}
     else
        {return false;}
        }

void myStack_arr::size_of()
    {cout<<"The current size of the stack is "<<size<<endl;}

void myStack_arr::push(int val)
    {if (!full())
        {arr[size]=val;
         size++;}
    else
    {cout<<"Stack overflow"<<endl;}
    }

void myStack_arr::pop()
    {if (!empty())
        {size--;
         int popval=arr[size];
        cout<<"Popped Element "<<popval<<endl;
        }
     else
         cout<<"Stack Underflow"<<endl;
    }

void myStack_arr::top()
    {if (!empty())
        {cout<<"Top Element "<<arr[size-1]<<endl;}
     else
         {cout<<"Stack is empty"<<endl;
         }
    }

void myStack_arr::print()
    {if (!empty())
    for (int i=size-1;i>=0;i--)
        {cout<<arr[i]<<endl;}
    else
        {cout<<"Stack is empty"<<endl;}
    }
