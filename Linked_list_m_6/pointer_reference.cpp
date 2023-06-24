// // passing a value as reference
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int * v)
// {
//     // here v is new variable itself, it has a completely new memory address in memory, but it is containing the memory address of "val"
//     // cout << v << endl;
// }
// int main()
// {
//     int val = 10;
//     // &val meaning the address of val variable where it is present in memory;
//     int * val_pointer = &val;
//     // passing the val address to fun function, not passing val_pointers address
//     // fun(val_pointer);
//     // cout << val_pointer << endl;
//     // in the above case val_pointer and v will print same output, which is the memory address of val
//     return 0;
// }

// passing a value as reference and also the same address of value container itself
#include <bits/stdc++.h>
using namespace std;
void fun(int *&v)
{
    // here v is new variable itself, but it has a the same memory address in memory as the val_pointer has itself. Both are containing as value is "val"
    cout << &v << endl;
}
int main()
{
    int val = 10;
    // &val meaning the address of val variable where it is present in memory;
    int *val_pointer = &val;
    // passing the val address to fun function, not passing val_pointers address
    fun(val_pointer);
    cout << &val_pointer << endl;
    // in the above case val_pointer and v will print same output, which is the memory address of val
    return 0;
}