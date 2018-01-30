#include<iostream>
using namespace std;


class Ankit{
    static int counter;
    public:
        Ankit(){
            counter++;
            cout<<counter<<endl;
        }
};
int Ankit::counter;
int main(){
    Ankit obj1, obj2;
    return 0;
}
