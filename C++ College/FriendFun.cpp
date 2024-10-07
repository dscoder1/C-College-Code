#include <iostream>
#include <string>
using namespace std;
class Car1;
class Car
{
    int speed;
    string Name;

public:
    friend void set(Car,Car1);
};
class Car1{
   int mileage, model_no;
   public:
    friend void set(Car,Car1);
};
friend void set(Car,Car1)
{
    speed = speed1;
    mileage = mileage1;
    model_no = model_no1;
    Name = Name1;
}
int main()
{
    Car c1;
    c1.set(120, 20, 2345325234, "Thar");
}