#include <iostream>
#include <vector>
using namespace std;

const int N = 40;

template <class summable>
inline summable sum(vector<summable> d, int size, summable p = 0) {
    for (int i = 0; i < size; ++i) {
        p += d.at(i);
    }
    return p;
}

int main() {
    vector<int> data;
    data.reserve(N);//pre allocates space
    for(int i = 0; i < N; ++i) {
        data.push_back(i); //assignees numbers
    }

    const int result = sum(data, N); //sums numbers

    cout << "sum is " << result << endl; //prints result
    return 0;
}

