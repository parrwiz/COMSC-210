#include <iostream>
#include <string>
using namespace std;

void hailstone (int n, int limit, int highest); //here's our prototype

int main ()
{
  int n = 0, limit = 0;
    //The number to start with
  cout << "Number: " ;
  cin >> n;
  while(n < 1)
  {
    cout << "Invalid number, please try again." << endl;
    cin >> n;
  }
   //limit of the number  
  cout << "Limit of function calls: ";
  cin >> limit;
  while(limit < 1)
  {
    cout << "Invalid number, please try again." << endl;
    cin >> limit;
  }
    
  hailstone(n, limit, 1);
    
  return 0;
}

void hailstone (int n, int limit, int highest)
{
  if(n > highest) //test for new highest number
  {
    highest = n;
  }

  if(n == 1) //if we hit one before hitting the limit
  {
    cout << "Highest number reached: " << highest << endl;
    return;
  }
  else if(limit == 0) //if we hit our limit before we hit 1
  {
    cout << "Sequence was aborted early" << endl;
    cout << "Highest number reached: " << highest << endl;
    return;
  }
  else if(n%2 == 0) //here's our even option
  {
      int k = n/2;
    cout << "hailstone(" << n << ") is " << k << endl;
    n = n/2;
    limit--;
    hailstone(n, limit, highest);
  }
  else if(n%2 != 0) //here's our odd option
  {
    int k = 3*n + 1;
    cout << "hailstone(" << n << ") is " << k << endl;
    n = 3*n +1;
    limit--;
    hailstone(n, limit, highest);
  }
 
}