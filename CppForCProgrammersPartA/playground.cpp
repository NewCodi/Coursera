#include <iostream>
#include <chrono>
#include <unistd.h>
#include <vector>
#include <string>
 
using namespace std;

template <class T>
inline void printVariableType(T& var)
{
    cout << "Variable Type: "
        << typeid(var).name() << endl;
}

template<class time>
inline void printTimeDiff(const string funcName, const time& start, const time& end)
{
    cout << funcName 
        << " runtime : "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
}
 
const int myDataSize = 40000;
vector<int> myData;

void getSizeTest_1(void)
{
    auto start = chrono::steady_clock::now();

    for(int i = 0; i<myData.size(); i++)
    {

    }

    auto end = chrono::steady_clock::now();
    printTimeDiff(__func__, start, end);
}

void getSizeTest_2(void)
{
    auto start = chrono::steady_clock::now();
    int size = myData.size();
    for(int i = 0; i<size; i++)
    {
        
    }

    auto end = chrono::steady_clock::now();
    printTimeDiff(__func__, start, end);
}

// Main function to measure elapsed time of a C++ program
// using Chrono library
int main()
{
    myData.resize(myDataSize);
    for(int i = 0; i< myDataSize; i++)
    {
        myData[i] = i;
    }

    getSizeTest_1();
    getSizeTest_2();

    printVariableType(__func__);
    return 0;
}