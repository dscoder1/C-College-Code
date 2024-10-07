#include<iostream>
using namespace std;
class Complex{
int x,y;
public:
Complex(){}
Complex(int x,int y){
this->x=x;
this->y=y;
}
Complex operator +(Complex o1){
Complex h1;
h1.x=this->x+o1.x;
h1.y=this->y+o1.y;
return h1;
}
void display(){
    cout<<x<<"+"<<y<<"i"<<endl;
}
};
int main(){
    int a,b,c,d;
cout<<"Enter 4 Element You want to add:";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
Complex o1(a,b);
Complex o2(c,d);
Complex o3; 
o3=o1+o2;
o3.display();
    return 0;
}