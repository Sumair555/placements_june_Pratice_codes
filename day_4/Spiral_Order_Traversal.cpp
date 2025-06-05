#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> matrix = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};

  int top = 0;
  int bottom = matrix.size() - 1;
  int left = 0;
  int right = matrix[0].size() - 1;

  cout << "Spiral order: ";

  while (top <= bottom && left <= right)
  {
    // Left to Right
    for (int i = left; i <= right; i++)
      cout << matrix[top][i] << " ";
    top++;

    // Top to Bottom
    for (int i = top; i <= bottom; i++)
      cout << matrix[i][right] << " ";
    right--;

    // Right to Left
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
        cout << matrix[bottom][i] << " ";
      bottom--;
    }

    // Bottom to Top
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
        cout << matrix[i][left] << " ";
      left++;
    }
  }

  cout << endl;
  return 0;
}
