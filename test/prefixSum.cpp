#include <iostream>
using namespace std;
int main()
{
      int arr[] = {1,2,3,4,5,6,7,8,9};
      int n = 9;
      int prefixSum[n];
      
      for(int i = 0; i < n; i++)
      {
            prefixSum[i] = arr[i];
      }

      for(int i = 1; i < n; i++)
      {
            prefixSum[i] += prefixSum[i - 1];
      }

      for(int i : prefixSum)
      {
            cout << i << " ";
      }
      cout << endl;
}