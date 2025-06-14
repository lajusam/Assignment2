/*Create a class rectangle having public attributes: length and breadth.
a. Create a public function calc_area(). That calculates and displays area as
l*b.
b. Create an object r1 and set its length and breadth to 17 and 4 respectively.
c. Calculate and print the area of object r1.*/
#include<iostream>
using namespace std;


class rectangle{
    public:
    int length,breadth;


    void calc_area(int l,int b)
    {
        length=l;
        breadth=b;
        cout<<"The area of rectangle with length as "<<l<<" and breath as "<<b<<" is "<<l*b<<endl;
    }


};
int main()
{
    rectangle r1;
    int l=17,b=4;
    r1.calc_area(l,b);
    return 0;


}
