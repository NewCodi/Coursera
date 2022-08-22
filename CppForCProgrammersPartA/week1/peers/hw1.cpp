#include <iostream>
#include <vector>

// sum up n elements in d array and put the result in p
inline void sum(int &p, std::vector<int> d)
{
    p = 0;
    int size = d.size();
    for(int i = 0; i < size; ++i)
        p = p + d[i];
}

int main()
{
    const int N = 40;
    std::vector<int> data;
    for(int i = 0; i < N; ++i)
    	data.push_back(i);

    int accum = 0;
    sum(accum, data);

    std::cout << "sum is " << accum << std::endl;

    return 0;
}
