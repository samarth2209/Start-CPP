#include <iostream>
using namespace std;

//Without using recursion

int Sum_Without_Recursion(int n)
{

  int i, sum = 0;

  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

//Using recursion

int Sum_Using_Recursion(int n)
{
  if (n != 0)
  {
    return n + Sum_Using_Recursion(n - 1);
  }

  return 0;
}

int main()
{
  int n;

  cout << "Enter the Number : ";
  cin >> n;
  cout << "Sum without using Recursion= " << Sum_Without_Recursion(n) << endl;

  cout << "Sum using Recursion= " << Sum_Using_Recursion(n) << endl;

  return 0;
}
