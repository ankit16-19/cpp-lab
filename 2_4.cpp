#include<iostream>
using namespace std;

class test{
    public:
        void func(int a){
            cout<<"function with 1 parameter"<<a<<endl;
        }
        void func(int a, int b = 5){
            cout<<"Function with 2 parameters"<<a<<b<<endl;
        }
};


int main(){
    test t;
    t.func(3);
    t.func(1,2);
}
