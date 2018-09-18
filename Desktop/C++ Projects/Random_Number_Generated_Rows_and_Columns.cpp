#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
   srand(time(0));
   int minValue=3, maxValue=9, x= rand() % (maxValue - minValue + 1) + 
    minValue, y=rand() % (maxValue - minValue + 1) + minValue;
   
    cout << "x= "<<x << endl;
    cout << "y= "<<y << endl;
    cout << " Their geometric mean is " << sqrt(x*y)<<endl;

    int ROWS=x, COLS=y;
    for (int x = 1; x <= ROWS; ++x) {
    for (int y = 1; y <= COLS; ++y)
      if (y % 2 == 0)
      cout<<"B";
      else
      cout <<"A";
      cout<<endl;
      }
}
