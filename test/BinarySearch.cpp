#include <iostream>
using namespace std;

int sum1ToN(int n)
{
      return n * (n + 1) / 2;
}

int getSumIndex(int target)
{
      int l = 0;
      int r = target;
      int m;
      while(l <= r)
      {
            m = (l + r) / 2;
            if(sum1ToN(m) == target)
            {
                  return m;
            }
            else if(sum1ToN(m) < target)
            {
                  l = m + 1;
            }
            else
            {
                  r = m - 1;
            }
      }
      return -1;
}

int binarySearch(int arr[], int n, int target)
{
      int m;
      int l = 0;
      int r = n - 1;
      while(l <= r)
      {
            m = (l + r) / 2;
            if(arr[m] == target)
            {
                  break;
            }
            else if(arr[m] < target)
            {
                  l = m + 1;
            }
            else
            {
                  r = m - 1;
            }
      }
      if(arr[m] != target)
      {
            return -1;
      }
      else
      {
            return m;
      }
}




int main()
{
      int n = 100;
      int nums[n];
      for(int i = 0; i < n; i++)
      {
            nums[i] = i;
      }


      cout << binarySearch(nums, n, 50) << endl; // Output: 50
      cout << binarySearch(nums, n, 100) << endl; // Output: -1
      cout << binarySearch(nums, n, 0) << endl; // Output: 0
      cout << binarySearch(nums, n, 99) << endl; // Output: 99
      cout << binarySearch(nums, n, 1) << endl; // Output: 1
      cout << binarySearch(nums, n, 2) << endl; // Output: 2
      cout << binarySearch(nums, n, 3) << "\n\n\n"; // Output: 3


      
      cout << getSumIndex(10) << endl; // Output: 4
      cout << getSumIndex(15) << endl; // Output: 5
      cout << getSumIndex(20) << endl; // Output: 6
      cout << getSumIndex(21) << endl; // Output: -1
      cout << getSumIndex(36) << endl; // Output: 8
      cout << getSumIndex(55) << endl; // Output: 10
}