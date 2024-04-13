// CAR RENTAL AND TEXI JOB SYSTEM
// 23AIML014_DEVANG
// 23AIML010_OM
// 23AIML  _ANSH

#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

//declaration of classes
int main();
class USER
{
    string name, email;
    int age;
    long int mob_num;
    string username;
    string password;
    void new_user();
    void sign_up();
};
void USER:: new_user()
{
    cout<<endl<<"Enter Your name :";
    cin>>name;
    cout<<endl<<"Enter age :";
    cin>>age;
    cout<<endl<<"Enter Your Mobile Number :";
    cin>>mob_num;
    cout<<endl<<"Enter an Unique Username :";
    cin>>username;
    cout<<endl<<"Create a password for your account: ";
    cin>>password;
    cout<<endl<<"YOU HAVE ESUCCESSFULLY CREATED YOUR ACCOUNT";
}
class driver
{
    string d_name;
    int age;
    long int licence_num, cont_num, aadhar;
    public:
    driver();
};
driver:: driver()
{
    cout<<endl<<"Enter your name :";
    cin>>d_name;
    cout<<endl<<"Enter age :";
    cin>>age;
    cout<<endl<<"ENTER LEGAL DETAILS "<<endl<<"Enter AADHAR Number: ";
    cin>>aadhar;
    cout<<endl<<"Enter Driving Licence Number: ";
    cin>>licence_num;
    cout<<"Enter Your Contact Number";  
    cin>>cont_num;
}
class car: public driver
{  
    string car_name;
    long int vehicle_num;
    public:
    void add_texi();
};
void car:: add_texi()
{
   cout<<endl<<"ENTER YOUT VEHICLE DETAILS"<<endl<<"Enter Car name :";
   cin>>car_name;
   cout<<"Enter Ragistred Vehicle Number: ";
}



int main()
{
    cout<<endl<<"-------------WELCOME TO CAR RENTAL PLATFORM-------------";
    cout<<endl<<"New User ?";
    cout<<endl<<"BOOK A CAB ?";
    cout<<endl<<"WANT TO BE A TEXI DRIVER ?";
    return 0;
}