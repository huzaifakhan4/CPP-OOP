/*Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/
#include <iostream>
using namespace std;
struct Distance
{
       int feet;
       float inches;
};
struct Volume
{
       Distance length,width,height;
};
int main()
{
       float l, w, h;
       Volume room = { { 10, 9.4 },{ 18, 3.4 },{ 3, 0.75 } };
       l = room.length.feet + room.length.inches / 12;           // divided by 12 because one feet is equal to 12 inches
       w = room.width.feet + room.width.inches / 12;
       h = room.height.feet + room.height.inches / 12;
       cout << "Volume = " << l*w*h << " cubic feet"<<endl;
       return 0;

}

	

