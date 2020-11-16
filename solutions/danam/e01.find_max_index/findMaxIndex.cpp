#include "findMaxIndex.h"
#include <vector>

using std::vector;

int findMaxIndex(const vector<int>& v)
{
  int maxIdx = -1;
  if(v.empty()) {
    return -1;
  }
  int maxVal = v[0];

  for (auto iter = v.begin(); iter != v.end(); iter++)
  {
    if (*iter >= maxVal)
    {
      maxVal = *iter;
      maxIdx = iter - v.begin();
    }
  }

  return maxIdx;
}

