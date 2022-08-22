/*   Convert this program to C++

*   change to C++ io

*   change to one line comments

*   change defines of constants to const

*   change array to vector<>

*   inline any short function

*/
#include <iostream>
#include <vector>

using namespace std;

// use the same name as original question
const int N = 40;

// a template type of Ts, which is a summable type
// that should support the operator +=
template <class Ts>
// inline for short function summation
inline void sum(Ts &sum, vector<Ts> &data)
{
    //C++11
    for(Ts ele : data)
    {
        //since Ts is a summable type, it should support the += operator
        sum += ele;
    }

    // syntax error
    // any other type doesn't support += should overloading the operator +=, TODO - not yet learn how to do overload

    // runtime error
    // or the type does support +=, but the way of summation is not expected
}

int main()
{

    int i;

    int accum = 0;

    // change array to vector structure with int type
    vector<int> data;

    // add the data into the vector as original
    for (i = 0; i < N; ++i)
        data.push_back(i);

    // call the templated inline functions
    sum(accum, data);

    cout << "sum is " << accum << endl;

    return 0;
}