
/*#include<iostream>
using namespace std;
template<class T>
class stack
{
private:
    T *stk;
    int top;
    int size;
public:
    stack(int sz)
    {
        size=sz;
        top=-1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};
template<class T>
void stack<T>::push(T x)
{
    if(top==size-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template<class T>
T stack<T>::pop()
{
    T x;
    if(top==-1)
    {
        cout<<"stack is already empty"<<endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<int> s(10);
    s.push(10);
    s.push(20);
    return 0;
}
#include <iostream>
using namespace std;
class sum
{
public:
    int num;
    friend void operator>>(istream &in, sum &s);
    int sumofsquares();
};
int sum::sumofsquares()
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result += (i * i);
    }
    return result;
}*/
#include <iostream>
using namespace std;

class solution
{
public:
    void Solve(int a, double &x)
    {
        x = a;
        cout << x << endl;
    }
    void Solve(int a, int b, double &x, double &y)
    {
        x = a;
        y = b;
    }
};
int main()
{
    solution sol;
    int S, a, b, c,res1,res2,res3;
    double x, y, z;
    cin >> S >> a >> b >> c;
    res1 = S * a;
    res2 = S * b;
    res3 = S * c;
    if (a == 0 && b == 0 && c == 0)
    {
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    else
    {
        sol.Solve(res1, x);
        sol.Solve(res2, res3, y, z);
        if (a == 0 && b == 0 && c == 0)
        {
            x = 0.0;
            y = 0.0;
            z = 0.0;
        }
    }
    cout << x << " " << y << " " << z;
    return 0;
}