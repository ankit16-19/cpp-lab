#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    private:
        double s1, s2, s3;
    public:
        Triangle(double a, double b, double c){
            s1 = a;
            s2 = b;
            s3 = c;
        }
        void area(double a, double b){
            cout<<"Area of the Triangle(Right angled) is: "<<0.5*a*b<<endl;
        }
        void area(){
            double s = (s1+s2+s3)/2;
            cout<<"Area of the Triangle is: "<<sqrt(s*(s-s1)*(s-s2)*(s-s3))<<endl;
        }
        void check_and_display(){
            // check if the triangle is right angled
            if(pow(s1,2) == pow(s2,2) + pow(s3,2))
                area(s2, s3);
            else if(pow(s3,2) == pow(s2,2) + pow(s1,2))
                area(s1, s2);
            else if(pow(s2,2) == pow(s1,2) + pow(s3,2))
                area(s1, s3);
            else
                area();
        }
};

int main(){
    Triangle t(3, 4, 5);
    t.check_and_display();
}
