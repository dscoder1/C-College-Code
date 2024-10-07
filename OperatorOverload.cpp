#include<iostream>
using namespace std;
class Operator{
int x,y;
public:
Operator(){}
Operator(int x,int y){
this->x=x;
this->y=y;
}
Operator Complex(Operator o1){
Operator h1;
h1.x=this->x+o1.x;
h1.y=this->y+o1.y;
return h1;
}
void display(){
    cout<<x<<"+"<<y<<"i"<<endl;
}
};
int main(){
Operator o1(5,6);
Operator o2(5,6);
Operator o3;
o3=o2.Complex(o2);
o3.display();
    return 0;
}