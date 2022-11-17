//VINCENT MUTETHIA
//SCT211-0017/2019
// COMPUTER SCIENCE 2.1
//ASSIGNMENT 1
//ICS 2201
//OOP2
#include<iostream>
using namespace std;
// constants
#define PI 3.142
class Circle{
private:
double radius;
public:
Circle(){
radius = 0;
}
Circle(double r){
radius = r;
}
// setter method
void setRadius(double r){
radius = r;
}
// getter method
double getRadius(){
return radius;
}
// compute area
double computeArea(){
return PI * radius * radius;
}
// compute perimeter
double computePerimeter(){
return 2 * PI * radius;
}
// printing circle
void printCircle(){
cout << "Area " << computeArea()<<endl;
cout << "Perimeter " << computePerimeter()<<endl;
cout << "Radius " << getRadius()<<endl;
}
};
class Square{
private:
double side;
public:
Square(){
side = 0;
}
Square(double s){
side = s;
}
void setSide(double s){
side =s;
}
double getSide(){
return side;
}
double computeArea(){
return side * side;
}
double computePerimeter(){
return 4 * side;
}
void printSquare(){
cout << "Side " << side <<endl;
cout << "Area " << computeArea()<<endl;
cout << "Perimeter " << computePerimeter()<<endl;
}
};
class Sphere{
private:
double sradius;
public:
Sphere(){
sradius = 0;
}
Sphere(double sr){
sradius = sr;
}
void setRadius(double sr){
sradius = sr;
}
double getRadius(){
return sradius;
}
double computeArea(){
return 4 * (PI * sradius * sradius);
}
double computeVolume(){
return 4/3 * PI * sradius * sradius * sradius;
}
void printSphere(){
cout << "Radius :" <<sradius <<endl;
cout << "Area :" <<computeArea() <<endl;
cout << "Volume :" <<computeVolume()<<endl;
}
};
class Cylinder{
private:
double height;
double cradius;
public:
Cylinder(){
cradius =0;
height = 0;
}
Cylinder(double c,double h){
cradius = c;
height = h;
}
void setRadius(double c){
cradius = c;
}
void setHeight(double h){
height = h;
}
double getRadius(){
return cradius;
}double getHeight(){
return height;
}
double computeArea(){
return (2 * PI*cradius*height)+ (2 * PI *cradius *cradius);
}
double computeVolume(){
return PI * cradius * cradius * height;
}
void printCylinder(){
cout << "Radius " << cradius <<endl;
cout << "Area " << computeArea()<<endl;
cout << "Volume " << computeVolume()<<endl;
}
};
int main(int argc, char const *argv[])
{
// Printing my name and reg number
cout<<"NAME:VINCENT MUTETHIA"<<endl;
cout<<"REG NUMBER:SCT211-0017/2019"<<endl;
cout<<"UNIT:OBJECT ORIENTED PROGRAMMING II"<<endl;
cout<<"COURSE:COMPUTER SCIENCE 2.1"<<endl;
cout<<"UNIT CODE: ICS2201"<<endl;
cout<<"ASSIGNMENT1"<<endl;
// create class objects
Circle circle;
Square square;
Sphere sphere;
Cylinder cylinder;
int choice;
cout << "Select an option "<<endl;
cout << "1.Square \n2.Circle \n3.Cylinder \n4.Sphere \n5.Exit \n\n>>>";
cin >> choice;
switch (choice)
{
case 1:
// cout << "Square";
double squareSide;
cout<<"Enter the side Square : "<<endl;
cin >>squareSide;
square.setSide(squareSide);
square.printSquare();
break;
case 2:
// input radius
double circleRadius ;
cout << "Enter the radius of the circle : ";
cin >> circleRadius;
circle.setRadius(circleRadius);
circle.printCircle();
break;
case 3:
cout << "Cylinder "<<endl;
double cylinderRadius;
double cylinderHeight;
cout << "Enter the radius of cylinder : ";
cin >> cylinderRadius;
cout << "Enter the heigth of the cylinder : ";
cin>> cylinderHeight;
cylinder.setRadius(cylinderRadius);
cylinder.setHeight(cylinderHeight);
cylinder.printCylinder();
break;
case 4:
cout << "Sphere"<<endl<<endl;
double sphereRadius;
cout<<"Enter the Radius of the Sphere : "<<endl;
cin >>sphereRadius;
sphere.setRadius(sphereRadius);
sphere.printSphere();
break;
case 5:
//system exit
cout << "Bye see you again !!!";
exit(0);
break;
default:
cout << "please enter a valid choice !!!"<<endl;
break;
};
return 0;
//
}