#include <iostream>
using namespace std;
template<class T>
T maximum(T x,T y)
{
    return x>y?x:y;
}
template<class R,class Q>
void add(R x,Q y)
{
    cout<<"the result is "<<x+y;
}
/*
int division(int x, int y)
{
    if (y == 0)
    {
        throw string("hello");
    }
    return x / y;
}*/
int main()
{
    int a = 10, b = 0, c;
    /*try
    {
        c = division(a, b);
        cout << c << endl;
        cout << "everthing is correct" << endl;
    }*/
    /*catch (string e)
    {
        cout << "an error has occured because of division by zero";
    }
    //catch(...) means it can handle all type of exceptions it must be the last catch block else remaining catch block will never be executed
    catch(...)
    {
        cout<<"error"<<endl;
    }*/
    // cout<<maximum(10,15)<<endl;
    // cout<<maximum(12.5,1.6)<<endl;
    add(12,15.1);
    return 0;
}