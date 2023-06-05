#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  vector<long long> temp1;
  temp1.push_back(1);
  ans.push_back(temp1);
  int i=2;
  while(i<=n)
  {
    vector<long long> temp;
    temp.push_back(1);
    for(int j=1;j<i-1;j++)
    {
      temp.push_back(ans.back()[j]+ans.back()[j-1]);
    }
    temp.push_back(1);
    ans.push_back(temp);
    i++;
  }
  return ans;
}
