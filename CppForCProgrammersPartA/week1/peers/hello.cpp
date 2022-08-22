//we include the iostream and vector libraries
#include <iostream>
#include <vector>
using namespace std;

// we set N into a constant int equals to 40
const int N = 40;

// we declare an inline function called sum that take an int by reference and a vector of int
inline void sum(int&p, vector<int>d)
{
int i;
//we declare n as the size of the vector d
int n=d.size();
// set the p to zero
p = 0;
// then for loop to sum the values in the vector
for(i = 0; i < n; ++i)

p = p + d[i];

}

int main()

{

int i;

int accum = 0;
// declare a vector called data with size of N
vector<int>data(N);
// a for loop to put values in the vector
for(i = 0; i < N; ++i)
data[i] = i;
//call the function sum
sum(accum,data);
// print the value of the summation of the values in the vector data
cout<<"sum is "<<accum<<endl;

return 0;

}