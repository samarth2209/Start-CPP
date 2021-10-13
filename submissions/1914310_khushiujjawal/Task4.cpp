#include <iostream>
using namespace std;

//without using recursion
int Sum_withoutRecursion(int n)
{

  int i, sum = 0;

  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

//using recursion
int Sum_usingRecursion(int n)
{
  if (n != 0)
  {
    return n + Sum_usingRecursion(n - 1);
  }

  return 0;
}

int main()
{
  int n;

  cout << "Enter the Number: ";
  cin >> n;
  cout << "Sum without using Recursion= " << Sum_withoutRecursion(n) << endl;

  cout << "Sum using Recursion= " << Sum_usingRecursion(n) << endl;

  return 0;
}
