#include<iostream>
using namespace std;

class Shape{
    private:
        double x,y;
    public:
        void area(double a, double b){
            x = a;
            y = b;
        }
        void area(){
            if(x == y){
                cout<<"area of the square is: "<<x*y<<endl;
            }else{
                cout<<"area of the rectangle is: "<<x*y<<endl;
            }
        }
};
int main(){
    Shape s;
    double s1,s2;
    cout<<"Enter sides(s1, s2) of the shape: "<<endl;
    cin>>s1>>s2;
    s.area(s1, s2);
    s.area();
    return 0;
}
