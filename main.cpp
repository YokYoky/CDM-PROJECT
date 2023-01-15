#include <iostream>
#include<istream>
#include<fstream>
#include <windows.h>
#include <unistd.h>
#include <iomanip>
using namespace std;

int main();
void login(){
    bool login;
    int choice;
    string username, password, usr, pwd;
    system("cls");

    while(login==false){
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        ifstream login_creds("credentials.txt");
        while(login_creds >> usr >> pwd){
            if(usr == username && pwd == password){
                login = true;
            }
        }
        login_creds.close();

        if(login == false){
            cout << "Incorrect Username or Password, Please try again.\n";
            cout << "(1) TRY AGAIN (0) MENU\nAnswer: ";
            cin >> choice;
            if(choice == 1){
                login = false;
                cout << "Loading ";
                sleep(1);
                cout <<".";
                sleep(1);
                cout <<".";
                sleep(1);
                cout <<".";
                system("cls");
            }
            else{
                sleep(1);
                system("cls");
                main();

            }
        }
        else{
            cout << "Login succesfully.";
        }
    }
}

void acc_reg(){
    string regUser, regPass, usr_reg, pwd_reg;
    bool acct_reg;
    system("cls");

    cout << "Enter Username: ";
    cin >> regUser;
    cout << "Enter Password: ";
    cin >> regPass;

    ofstream reg("credentials.txt", ios::app);
    reg << regUser << ' ' << regPass << endl;
    cout << "\nRegistration Succesful";
    sleep(2);
}

void forgot(){
    bool forgot_pwd;
    string find_user, su, sp;

    cout << "Enter Username: ";
    cin >> find_user;

    ifstream findUser("credentials.txt");
    while(findUser >> su >> sp){
        if(su == find_user){
            forgot_pwd = true;
        }
    }
    findUser.close();
    if(forgot_pwd == true){
        cout << "\nAccount Found\nYour password is: " << sp;
    }
    else{
        cout << "Username does not exist!\nTry again.";
    }
}

void hello_world(){
    cout << "Hello World!\n";
}

void house(){
    cout << "   X\n";
    cout << "  X X\n";
    cout << " X   X\n";
    cout << "XXXXXXX\n";
    cout << "X     X\n";
    cout << "X     X\n";
    cout << "XXXXXXX\n";
}

void lower_number(){
    int value1, value2,value3, value4;
    cout << "Input Value Number 1: ";
    cin >> value1;
    cout << "Input Value Number 2: ";
    cin >> value2;
    cout << "Input Value Number 3: ";
    cin >> value3;
    cout << "Input Value Number 4: ";
    cin >> value4;
    if (value1 < value2 && value1 < value3 && value1 < value4 ) {
        cout<<"A IS A LOWER NUMBER\n" << endl ;
    }
    else if (value2 < value1 && value2 < value3 && value3 < value4){
        cout<< "B IS A LOWER NUMBER\n" ;
    }
    else if (value3 < value1 && value3 < value2 && value3 < value4){
        cout<< "C IS A LOWER NUMBER\n" ;
    }
    else{
        cout<< "D IS A LOWER NUMBER\n";
    }
}

void higher_number(){
    int value1, value2,value3, value4;
    cout << "Input Value Number 1: ";
    cin >> value1;
    cout << "Input Value Number 2: ";
    cin >> value2;
    cout << "Input Value Number 3: ";
    cin >> value3;
    cout << "Input Value Number 4: ";
    cin >> value4;
    if (value1 > value2 && value1 > value3 && value1 > value4 ) {
        cout<<"A IS A LOWER NUMBER\n" << endl ;
    }
    else if (value2 > value1 && value2 > value3 && value3 > value4){
        cout<< "B IS A LOWER NUMBER\n" ;
    }
    else if (value3 > value1 && value3 > value2 && value3 > value4){
        cout<< "C IS A LOWER NUMBER\n" ;
    }
    else{
        cout<< "D IS A LOWER NUMBER\n";
    }
}

void avg_calcu(){
    string Name;
    int number_of_activities;
    double g1, g2, g3, g4, avg;

    cout << "Enter Name: ";
    cin >> Name;

    cout << "Enter number of activities: ";
    cin >> number_of_activities;
    cout << endl;

    cout << "Enter your 1st grade: ";
    cin >> g1;
    cout << "Enter your 2nd grade: ";
    cin >> g2;
    cout << "Enter your 3rd grade: ";
    cin >> g3;

    cout << "Enter your 4th grade: ";
    cin >> g4;
    cout << endl;
    // computation of avg
    avg = (g1+g2+g3+g4)/number_of_activities;
    // if else statement for avg
    if(avg == 100 && avg >= 98){ // if the condition is TRUE run the code which is cout, if FALSE check the next condition else if, and so on.
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 1.00" << endl;
    }
    else if(avg <= 97 && avg >=95){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 1.25" << endl;
    }
    else if(avg <= 94 && avg >=91){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 1.50" << endl;
    }
    else if(avg <= 90 && avg >=88){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 1.75" << endl;
    }
    else if(avg <= 87 && avg >=85){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 2.00" << endl;
    }
    else if(avg <= 84 && avg >=82){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 2.25" << endl;
    }
    else if(avg <= 81 && avg >=79){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 2.50" << endl;
    }
    else if(avg <= 76 && avg >=78){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 2.75" << endl;
    }
    else if(avg == 75){
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 3.00" << endl;
    }
    else{ // if all condition above are not met
        cout << "Hi, " << Name << " your average " << avg << " is equivalent to 5.00" << endl;
    }
}

void calculator(){
    char op_input;
    double result, num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Select operator ( + , - , * , / ): ";
    cin >> op_input;

    if(op_input == '+'){
        result = num1 + num2;
        cout << num1 << " added to " << num2 << " = " << result << endl;
    }
    else if(op_input == '-'){
        result = num1 - num2;
        cout << num1 << " substracted to " << num2 << " = " << result << endl;
    }
    else if(op_input == '*'){
        result = num1 * num2;
        cout << num1 << " multiplied by " << num2 << " = " << result << endl;
    }
    else if(op_input == '/'){
        result = (double)num1 / (double)num2;
        cout << num1 << " divided by " << num2 << " = " << result << endl;
    }
    else{
        cout << "INVALID OPERATOR\n";
    }
}

void inc_loop(){
    int endv, start;

    cout << "Enter start value to increment: ";
    cin >> start;
    cout << "Enter end value to increment: ";
    cin >> endv;


    for(int i = endv; i <= start; i++){
        cout << i << endl;
    }
}

void dec_loop(){
    int endv, start;

    cout << "Enter start value to decrement: ";
    cin >> start;
    cout << "Enter end value to decrement: ";
    cin >> endv;

    for(int i = start; i >= endv; i--){
        cout << i << endl;
    }
}

int main(){

    int menuChoice;
    do{
        cout << "(1) Login\n";
        cout << "(2) Register\n";
        cout << "(3) Forgot Password\n";
        cout << "(4) Exit Program\n";
        cin >> menuChoice;

        switch(menuChoice){
            case 1:
                login();
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                system("cls");

                do{
                    cout << "\t\tCDM PROGRAM ACTIVITIES\n";
                    cout << "(1) Hello World\n";
                    cout << "(2) House\n";
                    cout << "(3) Lower Number Identifier\n";
                    cout << "(4) Higher Number Identifier\n";
                    cout << "(5) Average Calculator With Equivalent Grade\n";
                    cout << "(6) Calculator\n";
                    cout << "(7) Increment Looping\n";
                    cout << "(8) Decrement Looping\n";
                    cout << "(0) Logout\n";
                    cout << "Enter your choice (1-8): ";
                    cin >> menuChoice;
                    sleep(2.5);
                    system("cls");

                    if(menuChoice==1){
                        hello_world();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==2){
                        house();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==3){
                        lower_number();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==4){
                        higher_number();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==5){
                        avg_calcu();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==6){
                        calculator();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==7){
                        inc_loop();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==8){
                        dec_loop();
                        cout << "(0) Logout\n";
                        cout << "(1) Menu\n";
                        cin >> menuChoice;
                        sleep(2.5);
                        system("cls");
                    }
                    else if(menuChoice==0){
                        cout << "Logging out\n";
                        sleep(2.5);
                        system("cls");
                    }
                    else{
                        cout << "invalid input, Try again\n(1) Menu\n(0) logout\n";
                        cin >> menuChoice;
                    }
                }while(menuChoice==1);
                break;
            case 2:
                acc_reg();
                sleep(2.5);
                system("cls");
                main();
                break;
            case 3:
                forgot();
                sleep(2.5);
                system("cls");
                main();
                break;
            case 4:
                return 0;
            default:
                cout << "error\n";
                main();
                break;
        }
    }while(menuChoice==0);
}
