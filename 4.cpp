#include <iostream>
using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
  void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print()
{
    cout<<"("<<X<<", "<<Y<<")"<<endl;
}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
//declarion of class rewctangle
class rectangle
{
    private:
      //it contaons 4 points which further conains two coordinate each
        Point A;
        Point B;
        Point C;
        Point D;
        int side1()
        {           //we are using the get function on class pointto get the values opf the cordinates
          return A.Get_X()- C.Get_X();//getting side1 by subtracting the X coordintaes
        }
        int side2()
        {
          return A.Get_Y()- C.Get_Y();//getting side2 by subtracting y cordinate
        }
    public:
        rectangle();//constructor default
        rectangle(Point lower,Point upper);//constructor for making rectangle using two points
        void print();//functtion to print point
        int area();//function to  get araea
};
rectangle::rectangle()
{
    A.Set_X(0);A.Set_Y(0);//setting default point as (0,0), (1,0), (0,1), (1,1). 
    B.Set_X(1);B.Set_Y(0);
    C.Set_X(1);C.Set_Y(1);
    D.Set_X(0);D.Set_Y(1);
}
rectangle::rectangle(Point lower,Point upper)//getting the lowe and upper ponint and seeting it in our rectangles point
{
  A=lower;
  C=upper;//we are getting an integer by get function nad stting it to our points by set function
  B.Set_X(upper.Get_X());//for B x coor. is same as upper x coor. and y is same as lower
  B.Set_Y(lower.Get_Y());
  D.Set_X(lower.Get_X());//for D x coor. is same as lower x coor. and y is same as upper
  D.Set_Y(upper.Get_Y());  
}
void rectangle::print(){
  cout<<"Four Points are"<<endl;//using the print function in point to print all point
  A.print();
  B.print();
  C.print();
  D.print();
}
int rectangle::area()//A  function to calculate area by length 1and 2 which is present in the class private section
{
  return side1()*side2();
}
// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
//Lab 7 exercise 4.1. Test member function print on points p1, p2:
  p2.print();//calling of function of apoint class
// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
    int x1,x2,y1,y2;
    rectangle r1;//declaring an object r1 of class rectangle
    cout<<"point of the default rectangle is";r1.print();cout<<endl;
    cout<<"enter the coordinate of bottom left corner point"<<endl;
    cout<<"X coordinate:";cin>>x1;
    cout<<"Y coordinate:";cin>>y1;
    cout<<"enter the coordinate of top right corner point"<<endl;
    cout<<"X coordinate:";cin>>x2;
    cout<<"Y coordinate:";cin>>y2;
    Point a(x1, y1);Point b(x2, y2);//declaring two points for the rectangle
    rectangle r2(a,b);//rectangle taking two points as input
    r2.print();//calling of function of rectangle
    cout<<"Area of the rectangle is "<<r2.area()<<endl;//calling area function from class ectangle
  return 0;
}

//---------------------- point.cpp ------------------------------------//
