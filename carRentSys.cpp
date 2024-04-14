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
    static int get_count();
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

//login function;
void USER:: login()
{
    string temp_uname, temp_pass;
    cout<<endl<<"----------- LOGIN ----------";
    cout<<endl<<"Enter your USERNAME : ";
    cin>>temp_uname;

    int flag=0;
    for(int i=0;i<(USER::get_count());i++)
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
            //goto texibook;
        }
        else{
            cout<<endl<<"SORRY, PASSWORD MISMATCH, PLEASE ENTER CORRECT PASSWORD !!!";

            goto pass_check;
        }
        
    }
}

//class for texi job applicats
class driver
{
    string d_name; 
    int age;
    long int licence_num, cont_num, aadhar;
    public:
    void add_driver();
    void put_driverinfo();
};
void driver:: put_driverinfo()
{
    cout<<endl<<"Texi Driver: "<<d_name<<endl<<"Contact Number : "<<cont_num;
}
// default constructor, aautomaticaly call when Inheritated Child class nitialized
void driver:: add_driver()
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
    string car_name, service_loc;
    long int vehicle_num;
    public:
    void add_texi();
    void put_texiinfo();
};
void car:: put_texiinfo()
{
  cout<<endl<<"Car Name: "<<car_name<<endl<<"Vehicle Registred Number: "<<vehicle_num;
}
void car:: add_texi()
{
   cout<<endl<<"ENTER YOUT VEHICLE DETAILS"<<endl<<"Enter Car name :";
   cin>>car_name;
   cout<<"Enter Ragistred Vehicle Number: ";
   cin>>vehicle_num;
   cout<<endl<<"Enter Service Location : ";
   cin>>service_loc;
   cout<<"YOU'HAVE BEEN RAGISTRED AN APPLLICATION  FOR TEXI JOB";
}

// new class : for cities and caalculating etc.
class book_texi
{
    string city[7]={"AHEMDABAD","MUMBAI","KOLKOTA", "CHENNAI", "DELHI","BANGLORE","NOIDA"};
    public:
    void choose_journey(driver &, car &);
};
//choosing city
void book_texi:: choose_journey(driver &d, car &c)
{
    int city1,city2, distance;
    choose_city:
    cout<<endl<<"CHOOSE PICK UP location: ";
    for(int y=0;y<7;y++)
    {
        cout<<endl<<"["<<y+1<<"]   "<<city[y];
    }
    cin>>city1;
    cout<<endl<<"CHOOSE DESTINATION: ";
    for(int y=0;y<7;y++)
    {
        cout<<endl<<"["<<y+1<<"]   "<<city[y];
    }
    cin>>city2;
    if(city1==city2){cout<<"CHOOSE ANOTHER OPTION"; goto choose_city;}
    else if((city1==1 && city2==2) || (city1==2 && city2==1))
    {
        distance=521;
    }
    else if((city1==1 && city2==3) || (city1==3 && city2==1))
    {
        distance=2056;
    }
    else if((city1==1 && city2==4) || (city1==4 && city2==1))
    {
        distance=1821;
    }
    else if((city1==1 && city2==5) || (city1==5 && city2==1))
    {
        distance=988;
    }
    else if((city1==1 && city2==6) || (city1==6 && city2==1))
    {
        distance=1491;
    }
    else if((city1==1 && city2==7) || (city1==7 && city2==1))
    {
        distance=974;
    }
    else if((city1==2 && city2==3) || (city1==3 && city2==2))
    {
        distance=1880;
    }
    else if((city1==2 && city2==4) || (city1==4 && city2==2))
    {
        distance=1318;
    }
    else if((city1==2 && city2==5) || (city1==5 && city2==2))
    {
        distance=1401;
    }
    else if((city1==2 && city2==6) || (city1==6 && city2==2))
    {
        distance=984;
    }
    else if((city1==2 && city2==7) || (city1==7 && city2==2))
    {
        distance=1388;
    }
    else if((city1==3 && city2==4) || (city1==4 && city2==3))
    {
        distance=1672;
    }
    else if((city1==3 && city2==5) || (city1==5 && city2==3))
    {
        distance=1562;
    }
    else if((city1==3 && city2==6) || (city1==6 && city2==3))
    {
        distance=1878;
    }
    else if((city1==3 && city2==7) || (city1==7 && city2==3))
    {
        distance=1520;
    }
    else if((city1==4 && city2==5) || (city1==5 && city2==4))
    {
        distance=2207;
    }
    else if((city1==4 && city2==6) || (city1==6 && city2==4))
    {
        distance=347;
    }
    else if((city1==4 && city2==7) || (city1==7 && city2==4))
    {
        distance=2165;
    }
    else if((city1==5 && city2==6) || (city1==6 && city2==5))
    {
        distance=2180;
    }
     else if((city1==5 && city2==7) || (city1==7 && city2==5))
    {
        distance=47;
    }
     else if((city1==6 && city2==7) || (city1==7 && city2==6))
    {
        distance=2125;
    }

    int pin,temp;
    pin=(2024+city1+(2*city2)+city1*city2+distance);
    float gst,rent,total,discount;
    // calculation
    rent=(9*(distance));
    gst=(0.18*(rent));
    total=rent+gst;
    temp=total;
    discount=total-temp;

    
    /// format of reciept is here.....
    d.put_driverinfo();
    c.put_texiinfo();
    cout<<endl<<"JOUREY:  FROM: "<<city[city1-1]<<"    TO:"<<city[city2-1];
    cout<<endl<<"PIN: "<<pin;
    cout<<endl<<"TOTAL DISTANCE: "<<distance;
    cout<<endl<<"RENT PER kM: 9 INR";     cout<<setw(35)<<"RENT= "<<rent<<"INR";
    cout<<endl<<"SERVICE CHARGE = 180 INR";cout<<setw(35)<<"+180 INR";
    cout<<endl<<"GST 8%";                  cout<<setw(35)<<"+ "<<gst<<"INR";
    cout<<endl<<"DISCOUNT ";               cout<<setw(35)<<"- "<<discount<<"INR";
    cout<<endl<<"TOTAL FLARE ="<<total<<"/- INR";
}


int main()
{
    
    int count=USER:: get_count();
    car c[count];
    USER u[count];
    driver d[count];
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
        cout<<endl<<"LOGIN : PRESS L TO LOGIN :";
        cout<<endl<<"New User ? : PRESS Y :";
        cin>>temp1;
        if(temp1=='L')
        {
            goto login;
        }
    
        else if(temp1=='Y')
        {
            int count=USER:: get_count();
            u[count].new_user();
        }
        else{
           cout<<endl<<"ERROR: CHOOSE VAALID OPTION";
           goto menu1;
        }
        login:
        cout<<endl<<"Now LOGIN here:";
        int count=USER:: get_count();
        u[0].login();

        // ________texi booking system here__________
        cout<<endl<<"CHOOSE YOUR LOCATION";
        book_texi a1;
        a1.choose_journey(d[count], c[count]);
    }
    else if(temp=='T')
    {
        c[count].add_texi();
        d[count].add_driver();
        goto menu;
    }
    else{
        cout<<"ERROR: PLEASE CHOOSE VALID OPTION ";
        goto menu;
    }
    
    return 0;
}