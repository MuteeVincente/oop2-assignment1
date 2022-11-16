#include<iostream>

using  namespace std;

// constants
#define PI (22/7)



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
        // setter  method
        void setRadius(double r){
            radius = r;
        }

        // getter  method
        double   getRadius(){
            return radius;
        }

      //    compute  area
       double computeArea(){
            return PI * radius * radius;
       }
        //    compute perimeter
        double computePerimeter(){
            return 2 * PI * radius;
        }

        // printing  circle
        void  printCircle(){
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
           return  side * side;
        }
        double computePerimeter(){
            return 4 * side;
        }
        void  printSquare(){
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
            return 4 * PI * sradius * sradius;
        }
        double computeVolume(){
            return 4/3 * PI * sradius * sradius * sradius; 
        }
        void printSphere(){
            cout << "Radius " <<sradius <<endl;
            cout << "Area  " <<computeArea() <<endl;
            cout << "Volume" <<computeVolume()<<endl;
        }

            
};
class Cylinder{
    private:
        double height;
        double cradius;
    public:
        Cylinder(){
            double cradius =0;
            double height  = 0;
        }
        Cylinder(double c,double h){
        
            double cradius = c;
            double height = h; 
        }
        void setRadius(double c){
            double cradius = c;
        }
        void setHeigth(double h){
            double height = h;
            
        }
        double getRadius(){
            return cradius;

        }double getHeight(){
            return height;

        }
        double computeArea(){
            return 2 * PI*cradius*height+ 2 * PI *cradius *cradius;
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

    cout<<"VINCENT MUTETHIA"<<endl;
    cout<<"SCT211-0017/2019"<<endl;
    cout<<"ASSIGNMENT1"<<endl;
    cout<<"OOP2"<<endl;
    cout<<"COMPUTER SCIENCE 2.1"<<endl;
    // create  class  objects
    Circle  circle;
    Square square;
    Sphere sphere;
    Cylinder cylinder;


 
    int choice;
    cout << "Select  an  option "<<endl;
    cout << "1.Square  \n2.Circle \n3.Cylinder  \n4.Sphere \n >>>";
    cin >> choice; 

    switch (choice)
    {
    case 1:
        // cout << "Square";
        double squareSide;
        cout<<"Enter the side Square"<<endl;
        cin >>squareSide;
        square.setSide(squareSide);
        square.printSquare();

        
        break;
        
    case 2:
        // input radius
        double circleRadius ;
        cout << "Enter  the  radius  of the circle : ";
        cin >> circleRadius;
        circle.setRadius(circleRadius);

        circle.printCircle();

        
        break;

    case 3:
        cout << "Cylinder "<<endl;
        double cylinderRadius;
        double cylinderHeigth;

        cout << "Enter the radius of cylinder";
        cin >> cylinderRadius;
        cout << "Enter the heigth of the cylinder";
        cin>> cylinderHeigth;
        cylinder.setRadius(cylinderRadius);
        cylinder.setHeigth(cylinderHeigth);
        cylinder.printCylinder();
        
        break;
    case 4:
        cout << "Sphere";
        double sphereRadius;
        cout<<"Enter the Radius of the Sphere "<<endl;
        cin >>sphereRadius;
        sphere.setRadius(sphereRadius);
        sphere.printSphere();
        break;
    case 5:
        cout << "Exit";
        exit(0);
        break;
    
    
    default:
    
        break;
    };


    return 0;
    //
}

