#include <iostream>
using namespace std;

static const int ZERO = 0;
static const int TEN = 10;

int main(int argc, char* argv[])
{
  int* nums = new int[TEN];
  int lower = 0, upper = 0;

  // Get user input
  cout << "Give a lower bound (must be greater than 0): ";
  cin >> lower;
  cout << "Give an upper bound: ";
  cin >> upper;

  // Initialize nums[]
  for (int i = ZERO; i < TEN; i++)
    nums[i] = ZERO;

  // Count digits
  for (int i = lower; i <= upper; i++)
  {
    int j = i;

    while (j != ZERO)
    {
      nums[j % TEN]++;
      j = j / TEN;
    } // while
  } // for

  // Print output
  for (int i = ZERO; i < TEN; i++)
    cout << i << ": " << nums[i] << endl;
	
  return ZERO;
} // main()
