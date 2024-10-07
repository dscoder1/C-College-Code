#include<iostream>
#include<string>
#include<fstream>
using namespace std;
fstream file,file1;
string Roll_No,Name,Course,Phone_No;
void Add(){
cout<<"FILL INFORMATION OF STUDENT CAREFULLY"<<endl<<endl;
cout<<"Enter Roll Number:";
cin.ignore();
getline(cin,Roll_No);
cout<<"Enter Name:";
getline(cin,Name);
cout<<"Enter Course:";
getline(cin,Course);
cout<<"Enter Phone Number:";
getline(cin,Phone_No);
file.open("SMS1",ios::out|ios::app);
file<<Roll_No<<"\t"<<Name<<"\t"<<Course<<"\t"<<Phone_No<<endl;
file.close();
cout<<"Successfully Inserted"<<endl;
}
void Display(){
cout<<"DETAILS OF STUDENT ARE"<<endl<<endl;
file.open("SMS1",ios::in);
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
while(!file.eof()){
cout<<endl<<"Student Roll Number: ";
cout<<Roll_No;
cout<<endl<<"Student Name: ";
cout<<Name;
cout<<endl<<"Student Course: ";
cout<<Course;
cout<<endl<<"Student Phone Number: ";
cout<<Phone_No;
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
}
file.close();
}
void Upr(){
string roll,Roll_No1,Name1,Course1,Phone_No1;
cout<<endl<<"Enter Roll Number You Want To Update:"<<endl;
cin.ignore();
getline(cin,roll);
file.open("SMS1",ios::in);
file1.open("SMS2",ios::out|ios::app);
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
while(!file.eof()){
    if(roll==Roll_No){
    cout<<"Enter New Roll Number:";
    cin.ignore();
    getline(cin,Roll_No1);
    cout<<"Enter New Name:";
    getline(cin,Name1);
    cout<<"Enter New Course:";
    getline(cin,Course1);
    cout<<"Enter New Phone Number:";
    getline(cin,Phone_No1);
    file1<<Roll_No1<<"\t"<<Name1<<"\t"<<Course1<<"\t"<<Phone_No1<<endl; 
    cout<<endl<<endl<<"UPDATED SUCCESSFULLY"<<endl<<endl;
    goto Label;
    }
    else{  
        file1<<Roll_No<<"\t"<<Name<<"\t"<<Course<<"\t"<<Phone_No<<endl;
        getline(file,Roll_No,'\t');
        getline(file,Name,'\t');
        getline(file,Course,'\t');
        getline(file,Phone_No,'\n');
        }
}
    Label:
    getline(file,Roll_No,'\t');
    getline(file,Name,'\t');
    getline(file,Course,'\t');
    getline(file,Phone_No,'\n');
file.close();
file1.close();
remove("SMS1");
rename("SMS2","SMS1");
}
void Upn(){
string name,Roll_No1,Name1,Course1,Phone_No1;
cout<<endl<<"Enter Nmae You Want To Update"<<endl;
cin.ignore();
getline(cin,name);
file.open("SMS1",ios::in);
file1.open("SMS2",ios::out|ios::app);
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
while(!file.eof()){
    if(Name==name){
    cout<<"Enter New Roll Number:";
    cin.ignore();
    getline(cin,Roll_No1);
    cout<<"Enter New Name:";
    getline(cin,Name1);
    cout<<"Enter New Course:";
    getline(cin,Course1);
    cout<<"Enter New Phone Number:";
    getline(cin,Phone_No1);
    file1<<Roll_No1<<"\t"<<Name1<<"\t"<<Course1<<"\t"<<Phone_No1<<endl;
    cout<<endl<<endl<<"UPDATED SUCCESSFULLY"<<endl<<endl;
    goto Label;
    }
    else{  
        file1<<Roll_No<<"\t"<<Name<<"\t"<<Course<<"\t"<<Phone_No<<endl;
        getline(file,Roll_No,'\t');
        getline(file,Name,'\t');
        getline(file,Course,'\t');
        getline(file,Phone_No,'\n');
        }
}
    Label:
    getline(file,Roll_No,'\t');
    getline(file,Name,'\t');
    getline(file,Course,'\t');
    getline(file,Phone_No,'\n');
file.close();
file1.close();
remove("SMS1");
rename("SMS2","SMS1");
}
void Update(){
int ch;
cout<<"Updating Details Of Student Through :"<<endl;
cout<<"1.Roll Number\n2.Name\n3.Back\n"<<endl;
cout<<"Enter Your Choice: "<<endl;
cin>>ch; 
if(ch==1)
Upr();
if(ch==2)
Upn();
}
void Der(){
string roll,Roll_No1,Name1,Course1,Phone_No1;
cout<<endl<<"Enter Roll Number You Want To Delete:"<<endl;
cin.ignore();
getline(cin,roll);
file.open("SMS1",ios::in);
file1.open("SMS2",ios::out|ios::app);
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
while(!file.eof()){
    if(roll==Roll_No){ 
    cout<<endl<<endl<<"DELETED SUCCESSFULLY"<<endl<<endl;
    goto Label;
    }
    else{  
        file1<<Roll_No<<"\t"<<Name<<"\t"<<Course<<"\t"<<Phone_No<<endl;
        getline(file,Roll_No,'\t');
        getline(file,Name,'\t');
        getline(file,Course,'\t');
        getline(file,Phone_No,'\n');
        }
}
    Label:
    getline(file,Roll_No,'\t');
    getline(file,Name,'\t');
    getline(file,Course,'\t');
    getline(file,Phone_No,'\n');
file.close();
file1.close();
remove("SMS1");
rename("SMS2","SMS1");
}
void Den(){
string name,Roll_No1,Name1,Course1,Phone_No1;
cout<<endl<<"Enter Nmae You Want To Update"<<endl;
cin.ignore();
getline(cin,name);
file.open("SMS1",ios::in);
file1.open("SMS2",ios::out|ios::app);
getline(file,Roll_No,'\t');
getline(file,Name,'\t');
getline(file,Course,'\t');
getline(file,Phone_No,'\n');
while(!file.eof()){
    if(Name==name){ 
    cout<<endl<<endl<<"DELETED SUCCESSFULLY"<<endl<<endl;
    goto Label;
    }
    else{  
        file1<<Roll_No<<"\t"<<Name<<"\t"<<Course<<"\t"<<Phone_No<<endl;
        getline(file,Roll_No,'\t');
        getline(file,Name,'\t');
        getline(file,Course,'\t');
        getline(file,Phone_No,'\n');
        }
}
    Label:
    getline(file,Roll_No,'\t');
    getline(file,Name,'\t');
    getline(file,Course,'\t');
    getline(file,Phone_No,'\n');
file.close();
file1.close();
remove("SMS1");
rename("SMS2","SMS1");
}
void Delete(){
int ch;
cout<<"Deleting Details Of Student Through :"<<endl;
cout<<"1.Roll Number\n2.Name\n3.Back\n"<<endl;
cout<<"Enter Your Choice: "<<endl;
cin>>ch; 
if(ch==1)
Der();
if(ch==2)
Den();
}
int main(){
    int choice;
cout<<"STUDENT MANAGMENT SYSTEM"<<endl;
cout<<"1.Add Student\n2.Display\n3.Update\n4.Delete\n5.Exit\n"<<endl;
do{
    cout<<endl<<"Enter Choice: "<<endl;
    cin>>choice;
switch(choice){
    case 1:Add();
    break;
    case 2:Display();
    break;
    case 3:Update();
    break;
    case 4:Delete();
    break;
    case 5:exit(0);
    break;
    default:cout<<"\nInvalid Choice"<<endl;
}
}while(choice!=5);
    return 0;
}