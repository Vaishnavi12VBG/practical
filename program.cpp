#include<bits/stdc++.h>
using namespace std;

int findTarget(vector<int> v,int target)
{
  int start=0;
  int end = v.size()-1;
  int mid = start+ (end-start)/2;
  
  while(start<=end)
  {
    if(target==v[mid])
    {
      return mid;
    }
    else if(target<v[mid])
    {
      end=mid-1;
    }
    else
    {
      start=mid+1;
    }
    mid = start+ (end-start)/2;
    
  }
  return -1;
}

int main()
{
  vector<int> v={1,3,5,7,9,11,13,15};
  int target = 5;
  int ans = findTarget(v,target);
  
  if(ans==-1)
  {
    cout<<target<<"is not present"<<endl;
  }
  else
  { 
    cout<<target<<"is present at the index"<<ans<<"which is"<<v[ans]<<endl;
  }
  return 0;
}
