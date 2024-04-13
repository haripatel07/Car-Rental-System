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
class driver
{
    string d_name;
    int age;
    long int licence_num, cont_num, aadhar;
};
class car: public driver
{  
    string car_name;
    long int vehicle_num;
    public:
    void add_new_texi();
};



int main()
{
    cout<<endl<<"-------------WELCOME TO CAR RENTAL PLATFORM-------------";
    cout<<endl<<"New User ?";
    cout<<endl<<"BOOK A CAB ?";
    cout<<endl<<"WANT TO BE A TEXI DRIVER ?";
    return 0;
}