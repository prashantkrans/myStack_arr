#ifndef myStack_arr_H_INCLUDED
#define myStack_arr_H_INCLUDED
#define MS 3 // To define maximum size of the stack
class myStack_arr{
private:
    int arr[MS];
    int size;
public:
    myStack_arr();
    bool empty();
    void size_of(); // Should not name the function as size, since it is already an inbuilt function.
    bool full();
    void top();
    void push(int val);
    void pop();
    void print();
};



#endif // MYSTACK_ARR_H_INCLUDED
