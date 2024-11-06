#include<iostream>
using namespace std;



int main() 
{ 

  int result = 0;
  int plsResult = 0;
  int evnResult = 0;
  int nums[6];
  int input;

  cout << "Please enter 6 numbers: \n";

  for (int i =0 ;i < 6; i++)
  {
    cin >> input;
    nums[i] = input;
    result += nums[i];

    if (nums[i] > 0)
    {
      plsResult += nums[i];
    }

    if (nums[i] > 0 && nums[i] %2 == 0)
    {
      evnResult += nums[i];
    }
  }
    cout << "\n===============================\n";
    cout << "\nThe sumation of numbers is: " << result << "\n";   
    cout << "The sumation of positive numbers are: " << plsResult << "\n";   
    cout << "The sumation of positive and even numbers are: " << evnResult << "\n";   
    cout << "\n===============================\n";
       
  
  return 0;
}