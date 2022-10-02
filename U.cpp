#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  vector<int>vec;
  int n,a,i=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {   cin>>a;
      vec.push_back(a);
  }
  int p,q;
  cin>>p>>q;
  
  vec.erase(vec.begin()+p,vec.end()+q);
  while(i<vec.size())
  {
      cout<<vec[i];
      i++;
  }

