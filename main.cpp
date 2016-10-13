#include "LargeInt.hpp"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    LargeInt  x, y, z;
    
    cout << "Enter an integer of your choice : ";
    cin >> x;
    
    cout << "Enter an integer of your choice : ";
    cin >> y;
    
    z = x+ y;
    cout <<"The Sum of  " << x << " by " << y << " is : " << z << endl;
    
    z = x /y;
    
    cout <<"The product of  " << x << " by " << y << " is : " << z << endl;
    
    cout <<"The remainder of  " << x << " by " << y << " is : " << z << endl;
    
    
    return 0;
    
}
