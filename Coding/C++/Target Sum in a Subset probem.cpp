/*You are given an array of integers and a target sum. Your task is to calculate the number of subsets of the given array whose elements add up to the specified target sum.*/
#include <iostream>
using namespace std;
int subset_sum(int arr[],int size,int sum)
{
  if(size==0){
    return (sum==0)?1:0;
  }
  return subset_sum(arr,size-1,sum-arr[size- 1])+subset_sum(arr,size-1,sum);
}
int main()
{
  int arr[4]={1,2,3,6};
  int sum;
  cout<<"Enter sum-";
  cin>>sum;
  cout<<subset_sum(arr,4,sum);
}


