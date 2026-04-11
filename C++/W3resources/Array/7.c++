// Code a program to find the most occurring element in an array of integers
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
  int arr[] = {1,2,2,3,4,3,3};
  int n = 7;
  int maxCount = 0;
  int mostFrequent = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int count = 0;
        for(int j = 0; j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    cout << "Most frequent element: " << mostFrequent;
    return 0;
}