// sum of non lower triangle

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> arr = {
      {1, 2, 3},
      {1, 2, 3},
      {1, 2, 3}};

  int rows = arr.size();
  int cols = arr[0].size();
  int sum = 0;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (i < j)
      {
        sum += arr[i][j];
      }
    }
  }

  cout << sum;
}
