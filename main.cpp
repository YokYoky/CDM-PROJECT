#include <iostream>
#include<istream>
#include<fstream>
#include <windows.h>
#include <unistd.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main();

void loadingBar(){
    // 0 - black background,
    // A - Green Foreground
    system("color 0F");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\tLoading...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);


    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 25; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(90);
    }

    cout <<"\n";
}


void login(){
    bool login;
    int choice;
    string username, password, usr, pwd;
    system("cls");


    while(login==false){
        cout << "_________________________________\n\n";
        cout << "\t     LOGIN\n";
        cout << "_________________________________\n\n";
        cout << "Username: ";
        cin >> username;
        HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
        DWORD mode = 0;
        GetConsoleMode(hStdin, &mode);
        SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
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
            system("cls");
            cout << "Login succesfully.";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
        }
    }
}

void acc_reg(){
    bool accReg;
    string regUser, regPass, usr_reg, pwd_reg;
    system("cls");

    cout << "_________________________________\n\n";
    cout << "\t     REGISTER\n";
    cout << "_________________________________\n\n";
    cout << "Enter Username: ";
    cin >> regUser;
    cout << "Enter Password: ";
    cin >> regPass;

    ofstream reg("credentials.txt", ios::app);
    ifstream acc("credentials.txt", ios::app);
    while(acc >> usr_reg >> pwd_reg){
            if(usr_reg == regUser && pwd_reg == regPass){
                accReg = true;
            }
        }
    if(accReg==false){
        reg << regUser << ' ' << regPass << endl;
        cout << "\nRegistration Succesful";
        sleep(2);
    }
    else{
        cout << "\nUsername already exist\n";
    }
}

void forgot(){
    bool forgot_pwd;
    string find_user, su, sp;
    system("cls");

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

void delete_usr(){
    string name, usr, pwd;

    cout << "enter username to delete: ";
    cin>>name;

    ifstream creds;
    creds.open("credentials.txt");
    ofstream temp;
    temp.open("temp.txt");

    creds >> usr;
    creds >> pwd;

    while(!creds.eof()){
        if(usr!=name){
            temp << usr<< " "<<pwd<<endl;
        }
        else{
            cout << "Account deleted\n";
        }
        creds >> usr;
        creds >> pwd;
    }
    temp.close();
    creds.close();

    remove("credentials.txt");
    rename("temp.txt", "credentials.txt");
}

void hello_world(){
    cout << "Hello World!\n";
}

void house(){
    cout << "\t " << endl;
	cout << "\t                  ________________________________ " << endl;
	cout << "\t               __/BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAY\\__ " << endl;
	cout << "\t            __/BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBA\\__ " << endl;
	cout << "\t         __/BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUB\\__ " << endl;
	cout << "\t        /BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAY\\________________ " << endl;
	cout << "\t       /BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKU\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t      /BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBO\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t     /BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBA\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t    /BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAKUBOBAHAYKUBOBAHAYKUBOBAHAY\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t   /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t  /|*|*|*|*|*|*|*|*|**|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "\t       BA   |HAY|KUB|    |OBA|HAY|   KU|-|-|-|-|-|-|-|BOBAHAYKUBOBA|*|*|*|*|*|*|*|*|*|*|*|*|\\ " << endl;
	cout << "\t       BA   |-------|    |-------|   HA||-|-|-|-|-|-||YK|          ||       ||        |UB " << endl;
	cout << "\t       BA   |HAY|KUB|    |OBA|HAY|   KU|-|-|-|-|-|-|-|BO|          ||       ||        |BA " << endl;
	cout << "\t       BA____________________________HA||-|-|-|-|-|-||YK|          ||       ||        |UB " << endl;
	cout << "\t       BAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHAYKUBOBAHA|__________||       ||________|YK " << endl;
	cout << "\t       BA ||  ||  ||  ||  ||  ||  || HA||-|-|-|-|-|-||YK|||||||||||||       |||||||||||UB " << endl;
	cout << "\t       BA HA  YK  UB  OB  AH  AY  KU BO|-|-|-|-|-|-|-|BA|| | | | | ||       || | | | ||HA " << endl;
	cout << "\t       BA ||  ||  ||  ||  ||  ||  || HA||-|-|-|-|-|-||YK|          ||       ||        |UB " << endl;
	cout << "\t       BAHAYKUBOBAHAYKUBOBAHAYKKUBOBAHA|-|-|-|-|-|-|-|YK| | | | | |||       ||| | | | |UB " << endl;
	cout << "\t       ==============================BA*H*A*Y*K*U*B*O*B*AH|||||||||||       |||||||||||YK " << endl;
	cout << "\t            BA    H                  AY    K          *UBOBAHAYKUBO\\\\=======\\\\OBAHAYKUBOB " << endl;
	cout << "\t            BA    H                  AY    K              UB    O   \\\\=======\\\\        BA  " << endl;
	cout << "\t            BA    H                  AY    K              UB    O    \\\\=======\\\\       BA  " << endl;
	cout << "\t            BA    H                  AY    K              UB    O     \\\\=======\\\\      BA  " << endl;
	cout << "\t            BA                       HA                   YK           \\\\=======\\\\     UB  " << endl;
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
        cout << num1 << " + " << num2 << " = " << result << endl;
    }
    else if(op_input == '-'){
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
    }
    else if(op_input == '*'){
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
    }
    else if(op_input == '/'){
        result = (double)num1 / (double)num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
    }
    else{
        cout << "INVALID OPERATOR\n";
    }
}

void inc_loop(){
    int endv, start;

    cout << "Enter higher value to increment: ";
    cin >> start;
    cout << "Enter lower value to increment: ";
    cin >> endv;


    for(int i = endv; i <= start; i++){
        cout << i << endl;
    }
}

void dec_loop(){
    int endv, start;

    cout << "Enter higher value to decrement: ";
    cin >> start;
    cout << "Enter lower value to decrement: ";
    cin >> endv;

    for(int i = start; i >= endv; i--){
        cout << i << endl;
    }
}

int main(){

    int menuChoice;
    loadingBar();
    system("cls");
    do{
        cout << "_________________________________\n\n";
        cout << "\t     MENU\n";
        cout << "_________________________________\n\n";
        cout << "\t(1) Login\n";
        cout << "\t(2) Register\n";
        cout << "\t(3) Forgot Password\n";
        cout << "\t(4) Delete Account\n";
        cout << "\t(5) Exit Program\n";
        cout << endl;
        cout << "Choice: ";
        cin >> menuChoice;

        switch(menuChoice){
            case 1:
                login();
                system("cls");

                do{
                    cout << "________________________________________\n\n";
                    cout << "\tCDM PROGRAM ACTIVITIES\n";
                    cout << "________________________________________\n\n";
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
                        do{
                            hello_world();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;

                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);

                    }
                    else if(menuChoice==2){
                        do{
                            house();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==3){
                        do{
                            lower_number();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==4){
                        do{
                            higher_number();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==5){
                        do{
                            avg_calcu();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==6){
                        do{
                            calculator();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==7){
                        do{
                            inc_loop();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==8){
                        do{
                            dec_loop();
                            cout << "(0) Display again\n";
                            cout << "(1) Back\n";
                            cin >> menuChoice;
                            cout << "Loading ";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            sleep(1);
                            cout << ".";
                            system("cls");
                        }while(menuChoice==0);
                    }
                    else if(menuChoice==0){
                        cout << "Logging out";
                        sleep(1);
                        cout << ".";
                        sleep(1);
                        cout << ".";
                        sleep(1);
                        cout << ".";
                        system("cls");
                    }
                    else{
                        cout << "invalid input, Try again\n(1) Menu\n(0) logout\n";
                        cin >> menuChoice;
                    }
                }while(menuChoice==1);
                break;
            case 2:
                do{
                    acc_reg();
                    cout << "\n(1) Display again\n";
                    cout << "(0) Back\n";
                    cin >> menuChoice;
                    cout << "Loading ";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    system("cls");
                }while(menuChoice==1);
                break;
            case 3:
                do{
                    forgot();
                    cout << "\n(1) Display again\n";
                    cout << "(0) Back\n";
                    cin >> menuChoice;
                    cout << "Loading ";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    system("cls");
                }while(menuChoice==1);
                break;
            case 4:
                do{
                    delete_usr();
                    cout << "\n(1) Display again\n";
                    cout << "(0) Back\n";
                    cin >> menuChoice;
                    cout << "Loading ";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    sleep(1);
                    cout << ".";
                    system("cls");
                }while(menuChoice==1);
            case 5:
                return 0;
            default:
                cout << "error\n";
                main();
                break;
        }
    }while(menuChoice==0);
}
