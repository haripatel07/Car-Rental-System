// CAR RENTAL AND TEXI JOB SYSTEM
// 23AIML014_DEVANG
// 23AIML010_OM
// 23AIML019_ANSH

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
    
    static int user_count; 
    public:
    void new_user();
    string get_uname(){return username;}
    string get_pass(){return password;}
    int get_count();
    void login();
};

int USER:: user_count=0;
int USER:: get_count(){return user_count;}
// New user function
void USER:: new_user()
{
    cout<<endl<<"Enter Your name :";
    cin>>name;
    cout<<endl<<"Enter age :";
    cin>>age;
    cout<<endl<<"Enter Your Mobile Number :";
    cin>>mob_num;
    cout<<endl<<"Enter your E-mail : ";
    cin>>email;
    cout<<endl<<"Enter an Unique Username :";
    cin>>username;
    cout<<endl<<"Create a password for your account: ";
    cin>>password;
    cout<<endl<<"YOU HAVE ESUCCESSFULLY CREATED YOUR ACCOUNT";
    user_count++;
}
void USER:: login()
{
    string temp_uname, temp_pass;
    cout<<endl<<"----------- LOGIN ----------";
    cout<<endl<<"Enter your USERNAME : ";
    cin>>temp_uname;
    
    int flag=0;
    for(int i=0;i<100;i++)
    { 
       if(temp_uname==username)
       {
        flag=1;
       }
    }
    if(flag==0)
    {
        cout<<endl<<"USERNAME NOT FOUND!! PLEASE ENTER VALID USERNAME or SIGN UP NEW USER IF NOT ";
    }
    else if(flag==1)
    {   pass_check:
        cout<<endl<<"Enter your password: ";
        cin>>temp_pass;
        if(temp_pass==password)
        {
            cout<<endl<<"You're Loged In successfully :";
            cout<<endl<<"WELCOME "<<name; 
        }
        else{
            cout<<endl<<"SORRY, PASSWORD MISMATCH, PLEASE ENTER CORRECT PASSWORD !!!";

            goto pass_check;
        }
        
    }
}
class driver
{
    string d_name; 
    int age;
    long int licence_num, cont_num, aadhar;
    public:
    driver();
};
// default constructor, aautomaticaly call when Inheritated Child class nitialized
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

// new class : for cities and caalculating etc.

int main()
{
    USER u[100];
    menu:
    cout<<endl<<"-------------WELCOME TO CAR RENTAL PLATFORM-------------";
    cout<<endl<<"BOOK A CAB ? PRESS Y : ";
    cout<<endl<<"WANT TO BE A TEXI DRIVER ? PRESS T : ";
    char temp;
    cin>>temp;
    if(temp=='Y')
    {
        char temp1;
        menu1:
        cout<<endl<<"LOGIN : PRESS L TO LOGIN";
        cout<<endl<<"New User ? : PRESS Y";
        cin>>temp1;
        if(temp1=='L')
        {
            goto login;
        }
    
        else if(temp1=='Y')
        {
            int count=0;
              u[count].new_user();
        }
        else{
           cout<<endl<<"ERROR: CHOOSE VAALID OPTION";
           goto menu1;
        }
        login:
        cout<<endl<<"Now LOGIN here:";
        u[0].login();
    }
    else if(temp=='T')
    {
        //call function new driver of class driver
    }
    else{
        cout<<"ERROR: PLEASE CHOOSE VALID OPTION ";
        goto menu;
    }
    return 0;
}