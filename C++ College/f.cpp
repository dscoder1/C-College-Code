#include <iostream>
using namespace std;
class MyClass
{
private:
    int privateData;

public:
    // MyClass() : privateData(0) {}

    // Friend function declaration
    friend void FriendFunction(int data);
};

// Friend function definition
void FriendFunction(int data)
{

    // Accessing private data
  //  cout << "Accessing private data: " << obj.privateData << endl;
}

int main()
{
    MyClass myObj;
    FriendFunction(myObj); // Calling the friend function
    return 0;
}