#include <iostream>
#include <vector>

#include "findMaxIndex.h"

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> myVec;
    myVec.push_back(10);
    cout << findMaxIndex(myVec) << endl; // prints 0
    myVec.push_back(1);
    cout << findMaxIndex(myVec) << endl; // prints 0
    myVec.push_back(13);
    cout << findMaxIndex(myVec) << endl; // prints 2
    myVec.push_back(23);
    cout << findMaxIndex(myVec) << endl; // prints 3
    myVec.push_back(10);
    cout << findMaxIndex(myVec) << endl; // prints 3
    return 0;
}
