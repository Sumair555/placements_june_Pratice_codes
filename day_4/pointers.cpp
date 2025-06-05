#include <iostream>
using namespace std;

// ================= Level 1: Basics =================
void level1()
{
  // Code 1
  int x = 10;
  int *ptr = &x;
  cout << *ptr << endl; // Output: 10

  // Code 2
  int a = 5;
  int *p = &a;
  *p = 7;
  cout << a << endl; // Output: 7

  // Code 3
  int y = 20;
  int *p1 = &y;
  int **q = &p1;
  cout << **q << endl; // Output: 20
}

// ================= Level 2: Intermediate =================
void update(int *p)
{
  *p = *p + 1;
}

void level2()
{
  // Code 4
  int a = 9;
  update(&a);
  cout << a << endl; // Output: 10

  // Code 5
  int arr[] = {1, 2, 3};
  int *p = arr;
  cout << *(p + 1) << endl; // Output: 2

  // Code 6
  int b = 5;
  int *p2 = &b;
  int *p3 = p2;
  *p3 = 8;
  cout << b << endl; // Output: 8
}

// ================= Level 3: Advanced =================
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void fun(int *p)
{
  p = p + 1;
  *p = 50;
}

void level3()
{
  // Code 7
  int a = 4, b = 7;
  swap(&a, &b);
  cout << a << " " << b << endl; // Output: 7 4

  // Code 8
  int arr[] = {10, 20, 30};
  int *p = arr;
  cout << *p++ << " " << *p << endl; // Output: 10 20

  // Code 9
  int x = 100;
  int *p1 = &x;
  int **q = &p1;
  int ***r = &q;
  ***r = 250;
  cout << x << endl; // Output: 250

  // Code 10
  int nums[] = {10, 20, 30};
  fun(nums);
  cout << nums[1] << endl; // Output: 50
}

// ================= Main =================
int main()
{
  cout << "--- Level 1 ---" << endl;
  level1();

  cout << "--- Level 2 ---" << endl;
  level2();

  cout << "--- Level 3 ---" << endl;
  level3();

  return 0;
}
