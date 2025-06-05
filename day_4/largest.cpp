#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int largest(const vector<int> &arr)
{
  int max = 0;
  for (int i : arr)
  {
    if (max < i)
    {
      max = i;
    }
  }
  return max;
}

int smallest(const vector<int> &arr)
{
  int min = 10000;
  for (int i : arr)
  {
    if (min > i)
    {
      min = i;
    }
  }
  return min;
}

int main()
{
  vector<int> arr;
  int a;
  while (cin >> a)
  {
    arr.push_back(a);
  }

  int l = largest(arr);
  int s = smallest(arr);

  cout << "largest = " << l << endl;
  cout << "smallest = " << s << endl;
}
