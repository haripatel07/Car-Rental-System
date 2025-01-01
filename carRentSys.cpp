
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>  // Include for file handling
#include <vector>   // For dynamic management of users, cars, and drivers

using namespace std;

int main();

class USER {
    string name, email;
    int age;
    long int mob_num;
    string username;
    string password;
    
    static int user_count;
public:
    void new_user();
    string get_uname() { return username; }
    string get_pass() { return password; }
    static int get_count();
    void login();
};

int USER::user_count = 0;

int USER::get_count() { return user_count; }

void USER::new_user() {
    cout << "\nEnter Your name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter Your Mobile Number: ";
    cin >> mob_num;
    cout << "Enter your E-mail: ";
    cin >> email;
    cout << "Enter a unique Username: ";
    cin >> username;
    cout << "Create a password for your account: ";
    cin >> password;
    cout << "\nYou have successfully created your account.";
    user_count++;
}

void USER::login() {
    string temp_uname, temp_pass;
    cout << "\n----------- LOGIN ----------";
    cout << "\nEnter your USERNAME: ";
    cin >> temp_uname;

    int flag = 0;
    if (temp_uname == username) {
        flag = 1;
    }
    if (flag == 0) {
        cout << "\nUSERNAME NOT FOUND!! Please enter a valid username or sign up as a new user.";
    } else if (flag == 1) {
        pass_check:
        cout << "\nEnter your password: ";
        cin >> temp_pass;
        if (temp_pass == password) {
            cout << "\nYou're logged in successfully!";
            cout << "\nWELCOME " << name;
        } else {
            cout << "\nSORRY, PASSWORD MISMATCH, PLEASE ENTER CORRECT PASSWORD!";
            goto pass_check;
        }
    }
}

class driver {
    string d_name;
    int age;
    long int licence_num, cont_num, aadhar;
public:
    void add_driver();
    void put_driverinfo() const;
};

void driver::put_driverinfo() const {
    cout << "\nTaxi Driver: " << d_name << "\nContact Number: " << cont_num;
}

void driver::add_driver() {
    cout << "\nEnter your name: ";
    cin >> d_name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter AADHAR Number: ";
    cin >> aadhar;
    cout << "Enter Driving Licence Number: ";
    cin >> licence_num;
    cout << "Enter Your Contact Number: ";
    cin >> cont_num;
}

class car : public driver {
    string car_name, service_loc;
    long int vehicle_num;
public:
    void add_taxi();
    void put_taxiinfo() const;
};

void car::put_taxiinfo() const {
    cout << "\nCar Name: " << car_name << "\nVehicle Registered Number: " << vehicle_num;
}

void car::add_taxi() {
    cout << "\nEnter your vehicle details";
    cout << "\nEnter Car name: ";
    cin >> car_name;
    cout << "Enter Registered Vehicle Number: ";
    cin >> vehicle_num;
    cout << "Enter Service Location: ";
    cin >> service_loc;
    cout << "You have been registered for a taxi job.";
}

class book_taxi {
    string city[7] = {"AHMEDABAD", "MUMBAI", "KOLKATA", "CHENNAI", "DELHI", "BANGALORE", "NOIDA"};
public:
    void choose_journey(const driver& d, const car& c);
};

void book_taxi::choose_journey(const driver& d, const car& c) {
    int city1, city2, distance = 0;

    cout << "\nChoose pick-up location:";
    for (int i = 0; i < 7; ++i) {
        cout << "\n[" << i + 1 << "] " << city[i];
    }
    cin >> city1;

    cout << "\nChoose destination:";
    for (int i = 0; i < 7; ++i) {
        cout << "\n[" << i + 1 << "] " << city[i];
    }
    cin >> city2;

    if (city1 == city2) {
        cout << "Choose different locations.";
        return;
    }

    // Distance calculation: You can replace this with real distances or use an array.
    if ((city1 == 1 && city2 == 2) || (city1 == 2 && city2 == 1)) distance = 521;
    if ((city1 == 1 && city2 == 3) || (city1 == 3 && city2 == 1)) distance = 1741;
    if ((city1 == 1 && city2 == 4) || (city1 == 4 && city2 == 1)) distance = 1711;
    if ((city1 == 1 && city2 == 5) || (city1 == 5 && city2 == 1)) distance = 1413;
    if ((city1 == 1 && city2 == 6) || (city1 == 6 && city2 == 1)) distance = 981;
    if ((city1 == 1 && city2 == 7) || (city1 == 7 && city2 == 1)) distance = 1205;
    
    if ((city1 == 2 && city2 == 3) || (city1 == 3 && city2 == 2)) distance = 1967;
    if ((city1 == 2 && city2 == 4) || (city1 == 4 && city2 == 2)) distance = 1870;
    if ((city1 == 2 && city2 == 5) || (city1 == 5 && city2 == 2)) distance = 1446;
    if ((city1 == 2 && city2 == 6) || (city1 == 6 && city2 == 2)) distance = 570;
    if ((city1 == 2 && city2 == 7) || (city1 == 7 && city2 == 2)) distance = 1150;

    if ((city1 == 3 && city2 == 4) || (city1 == 4 && city2 == 3)) distance = 1771;
    if ((city1 == 3 && city2 == 5) || (city1 == 5 && city2 == 3)) distance = 1249;
    if ((city1 == 3 && city2 == 6) || (city1 == 6 && city2 == 3)) distance = 1325;
    if ((city1 == 3 && city2 == 7) || (city1 == 7 && city2 == 3)) distance = 1814;

    if ((city1 == 4 && city2 == 5) || (city1 == 5 && city2 == 4)) distance = 1039;
    if ((city1 == 4 && city2 == 6) || (city1 == 6 && city2 == 4)) distance = 2294;
    if ((city1 == 4 && city2 == 7) || (city1 == 7 && city2 == 4)) distance = 2273;

    if ((city1 == 5 && city2 == 6) || (city1 == 6 && city2 == 5)) distance = 1776;
    if ((city1 == 5 && city2 == 7) || (city1 == 7 && city2 == 5)) distance = 2294;

    if ((city1 == 6 && city2 == 7) || (city1 == 7 && city2 == 6)) distance = 1541;

    // Calculating the PIN and fare
    int pin = (2024 + city1 + (2 * city2) + city1 * city2 + distance);
    float rent = 9 * distance, gst = 0.18 * rent, total = rent + gst;

    // Open a file for writing
    ofstream rentFile("rent.txt");

    if (rentFile.is_open()) {
        rentFile << "Journey: From " << city[city1 - 1] << " to " << city[city2 - 1] << endl;
        rentFile << "PIN: " << pin << endl;
        rentFile << "Total Distance: " << distance << " km" << endl;
        rentFile << "Rent per km: 9 INR" << setw(35) << "Rent = " << rent << " INR" << endl;
        rentFile << "Service Charge = 180 INR" << setw(35) << "+180 INR" << endl;
        rentFile << "GST 8%" << setw(35) << "+ " << gst << " INR" << endl;
        rentFile << "Total Fare = " << total << " INR" << endl;

        rentFile.close();
        cout << "\nFare details have been written to rent.txt successfully.";
    } else {
        cout << "\nError: Could not open rent.txt for writing.";
    }

    d.put_driverinfo();
    c.put_taxiinfo();
    cout << "\nJourney: From " << city[city1 - 1] << " to " << city[city2 - 1];
    cout << "\nPIN: " << pin;
    cout << "\nTotal Distance: " << distance;
    cout << "\nRent per km: 9 INR" << setw(35) << "Rent= " << rent << " INR";
    cout << "\nService Charge = 180 INR" << setw(35) << "+180 INR";
    cout << "\nGST 8%" << setw(35) << "+ " << gst << " INR";
    cout << "\nTotal Fare = " << total << " INR";
}

int main() {
    vector<USER> users;
    vector<driver> drivers;
    vector<car> cars;

    menu:
    cout << "\n-------------WELCOME TO CAR RENTAL PLATFORM-------------";
    cout << "\nBOOK A CAB? PRESS Y";
    //cout << "\nWANT TO BE A TAXI DRIVER? PRESS T";
    char temp;
    do {
        cout << "\nBOOK A CAB? PRESS Y";
        cout << "\nWANT TO BE A TAXI DRIVER? PRESS T";
        cin >> temp;
        temp = toupper(temp);
        if (temp != 'Y' && temp != 'T') {
            cout << "\nERROR: PLEASE CHOOSE A VALID OPTION.";
        }
    } while (temp != 'Y' && temp != 'T');

    if (temp == 'Y') {
        char temp1;
        menu1:
        cout << "\nLOGIN: PRESS L TO LOGIN";
        cout << "\nNew User? PRESS Y";
        cin >> temp1;
        if (temp1 == 'L') {
            goto login;
        } else if (temp1 == 'Y') {
            USER newUser;
            newUser.new_user();
            users.push_back(newUser);
        } else {
            cout << "\nERROR: Choose a valid option";
            goto menu1;
        }
        login:
        cout << "\nNow LOGIN here:";
        if (!users.empty()) {
            users.back().login();
        }

        cout << "\nCHOOSE YOUR LOCATION";
        book_taxi a1;
        a1.choose_journey(drivers.back(), cars.back());
    } else if (temp == 'T') {
        car newCar;
        newCar.add_taxi();
        cars.push_back(newCar);

        driver newDriver;
        newDriver.add_driver();
        drivers.push_back(newDriver);

        goto menu;
    } else {
        cout << "ERROR: PLEASE CHOOSE A VALID OPTION ";
        goto menu;
    }

    return 0;
}
