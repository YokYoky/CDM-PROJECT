#include <iostream>
#include<istream>
#include<fstream>
#include <windows.h>
#include <unistd.h>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;

int main();
void loading();
void login();
void acc_reg();
void forgot();
void delete_usr();
void hello_world();
void house();
void lower_number();
void higher_number();
void avg_calcu();
void calculator();
void inc_loop();
void dec_loop();
void menu();
void compilation();
void group();

void group(){
    system(" Color 0A ");
	cout<<("\t\t\t\t\t\t                 ")<<endl;
	cout<<("\t\t\t\t\t\t         млпллллм")<<endl;
	cout<<("\t\t\t\t\t\t         лллллллл")<<endl;
	cout<<("\t\t\t\t\t\t         лллллппп GROUP 3!!!")<<endl;
	cout<<("\t\t\t\t\t\t л      мллллппп  CONSTANTINO")<<endl;
	cout<<("\t\t\t\t\t\t ллм  мллллллммм  DELA CRUZ")<<endl;
	cout<<("\t\t\t\t\t\t пллллллллллл  п  BAGASIN")<<endl;
	cout<<("\t\t\t\t\t\t   плллллллп      UBALDE")<<endl;
	cout<<("\t\t\t\t\t\t    ллп пл        AGCAOILI")<<endl;
	cout<<("\t\t\t\t\t\t   лм   лм      ")<<endl;
	cout<<("\t\t\t\t\t\t   плл  ппп    ")<<endl;
	cout << "||=========       ||||     ||||==============     ||\\\\      ||         //===========\\\\ \n";
	cout << "||         \\\\     ||||     ||||==============     || \\\\     ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||  \\\\    ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||   \\\\   ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||    \\\\  ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||     \\\\ ||       ||              ||\n";
	cout << "||          ||    ||||     ||||==============     ||      \\\\||       ||==============||\n";
	cout << "||          ||    ||||     ||||==============     ||       \\\\|       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||        ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||        ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||        ||       ||              ||\n";
	cout << "||          ||    ||||     ||||                   ||        ||       ||              ||\n";
	cout << "||         //     ||||     ||||==============     ||        ||       ||              ||\n";
	cout << "||=========       ||||     ||||==============     ||        ||       ||              ||\n";
	sleep(5);
	system("cls");
}


void loading(){
    system("color F");
    char a = 219;

    char message[250] = "Opening program please wait . . .";
    printf("\n\n\n");
    printf("\n\n\n\t\t\t\t");
    for(int i=0; message[i] != '\0'; i++){
        cout <<message[i]<<"\xDB";
        for (int j = 0; j < 50000000; j++);
        cout<<"\b \b";
    }

    printf("\t\t\t\t\n\n");
    printf("\t\t\t\t");

    for (int i = 0; i < 40; i++) {
        printf("%c", a);

        Sleep(40);
    }
    sleep(2);
    cout <<"\n";
    cout << "\n\n\n\t\t\t\t";
    system("pause");
}


void login(){
    bool login;
    int choice;
    char ch;
    string username, password="", usr, pwd;
    system("cls");


    while(login==false){
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|                   LOGIN                     |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t Note: Password is invisible.\n";
        sleep(1);
        cout << "\n\n\t\t\t    Username: ";
        cin >> username;
        HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
        DWORD mode = 0;
        GetConsoleMode(hStdin, &mode);
        SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
        cout << "\t\t\t    Password: ";
        cin >> password;
        cout << endl;
        cout << "\n\n\t\t\t Verifying";
        sleep(1);
        cout << ".";
        sleep(1);
        cout << ".";
        sleep(1);
        cout << ".";
        cout << "\n";
        sleep(1);

        ifstream login_creds("credentials.txt");
        while(login_creds >> usr >> pwd){
            if(usr == username && pwd == password){
                login = true;
            }
        }
        login_creds.close();

        if(login == false){
        	sleep(1);
        	system("cls");
        	cout << "\n\n\t\t\t-----------------------------------------------";
            cout << "\n\t\t\t|                   LOGIN                     |\n\t\t\t-----------------------------------------------\n";
            cout << "\n\t\t\t Oops! Incorrect password. Please try again.\n";
            sleep(1.5);
            cout << "\n\n\t\t\t   (1) Try Again";
            cout << "\n\t\t\t   (0) Back\n";
            cout << "\n\n\t\t\t Choice: ";
            cin >> choice;
            sleep(2);

            if(choice==1){
                login = false;
            }
            else if(choice==0){
                menu();
            }

            system("cls");
        }
        else{
            system("cls");
            sleep(1);
            cout << "\n   Redirecting";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
            sleep(1);
            system("cls");
            compilation();
        }
    }
}


void acc_reg(){
    bool accReg;
    int choice;
    string regUser, regPass, usr_reg, pwd_reg;
    system("cls");

    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|                  REGISTER                   |\n\t\t\t-----------------------------------------------\n";
    cout << "\n\n\t\t\t    Enter Username: ";
    cin >> regUser;
    cout << "\t\t\t    Enter Password: ";
    cin >> regPass;
    cout << endl;
    cout << "\n\t\t\t Verifying account";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    cout << "\n";
    sleep(1);

    ofstream reg("credentials.txt", ios::app);
    ifstream acc("credentials.txt", ios::app);
    while(acc >> usr_reg >> pwd_reg){
            if(usr_reg == regUser){
                accReg = true;
            }
        }
    if(accReg==false){
        system("cls");
        reg << regUser << ' ' << regPass << endl;
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|                  REGISTER                   |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t Access Granted!\n\n";
        sleep(1.5);
        cout << "\n\t\t\t  (1) Login";
        cout << "\n\t\t\t  (0) Back\n";
        cout << "\n\n\t\t\t Choice: ";
        cin >> choice;
        sleep(2);

        if(choice==1){
            login();
            system("cls");
            sleep(2);
        }
        else{
            system("cls");
            menu();
        }
    }
    else{
        system("cls");
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|                  REGISTER                   |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t Username already exist.\n";
        sleep(1.5);
        cout << "\n\n\t\t\t   (1) Try Again";
        cout << "\n\t\t\t   (0) Back\n";
        cout << "\n\n\t\t\t Choice: ";
        cin >> choice;
        sleep(1);
        if(choice==1){
            acc_reg();
        }
        else if(choice == 0){
            menu();
        }
        else{
            cout << "Invalid input.\n";
        }
    }
}


void forgot(){
    bool forgot_pwd;
    string find_user, su, sp;
    int choice;
    system("cls");
    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|              FORGOT PASSWORD                |\n\t\t\t-----------------------------------------------\n";
        sleep(1);
        cout << "\n\n\t\t\t    Enter Username: ";
        cin >> find_user;
        cout << endl;
        cout << "\n\t\t\t Searching";
        sleep(1);
        cout << ".";
        sleep(1);
        cout << ".";
        sleep(1);
        cout << ".";
        cout << "\n";
        sleep(1);

    ifstream findUser("credentials.txt");
    while(findUser >> su >> sp){
        if(su == find_user){
            sleep(1);
            system("cls");
            cout << "\n\n\t\t\t-----------------------------------------------";
            cout << "\n\t\t\t|              FORGOT PASSWORD                |\n\t\t\t-----------------------------------------------\n";
            cout << "\n\t\t\t Account Found!\n";
            sleep(1);
            cout << "\t\t\t Your password is: "<< sp;
            sleep(1.5);
            cout << "\n\n\n\t\t\t  (1) Login";
            cout << "\n\t\t\t  (0) Back\n";
            cout << "\n\n\t\t\t Choice: ";
            cin >> choice;
            sleep(2);

            if(choice==1){
                login();
                system("cls");
                sleep(2);
            }
            else{
                system("cls");
                menu();
            }
                forgot_pwd = true;
            }
    }
    findUser.close();
    if(forgot_pwd == false){
        system("cls");
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|              FORGOT PASSWORD                |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t Account does not exist.\n";
        sleep(1.5);
    }
}


void delete_usr(){
    string name, usr, pwd;
    sleep(1);
    system("cls");
    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|               DELETE ACCOUNT               |\n\t\t\t-----------------------------------------------\n";
    cout << "\n\n\t\t\t    Enter username to delete: ";
    cin>> name;
    cout << endl;
    cout << "\n\n\t\t\t Deleting Account";
    sleep(1);
    cout << ".";
    sleep(2);
    cout << ".";
    sleep(2);
    cout << ".";
    cout << "\n";
    sleep(1);

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
            sleep(1);
            system("cls");
            cout << "\n\n\t\t\t-----------------------------------------------";
            cout << "\n\t\t\t|            DELETE ACCOUNT              |\n\t\t\t-----------------------------------------------\n";
            cout << "\n\t\t\t Account deleted.\n";
            sleep(1.5);
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
    double v1, v2,v3, v4;
    cout << "\n\t\t\t Input Value Number 1: ";
    cin >> v1;
    cout << "\t\t\t Input Value Number 2: ";
    cin >> v2;
    cout << "\t\t\t Input Value Number 3: ";
    cin >> v3;
    cout << "\t\t\t Input Value Number 4: ";
    cin >> v4;
    if (v1 < v2 && v1 < v3 && v1 < v4 ) {
        cout << "\n\n\t\t\t " << v1 << " is the lowest number. " << endl ;
    }
    else if (v2 < v1 && v2 < v3 && v3 < v4){
        cout << "\n\n\t\t\t " << v2 <<  " is the lowest number. " ;
    }
    else if (v3 < v1 && v3 < v2 && v3 < v4){
        cout << "\n\n\t\t\t " << v3 << " is the lowest number. " ;
    }
    else{
        cout << "\n\n\t\t\t " << v4 << " is the lowest number. ";
    }
}


void higher_number(){
    double v1, v2,v3, v4;
    cout << "\n\t\t\t Input Value Number 1: ";
    cin >> v1;
    cout << "\t\t\t Input Value Number 2: ";
    cin >> v2;
    cout << "\t\t\t Input Value Number 3: ";
    cin >> v3;
    cout << "\t\t\t Input Value Number 4: ";
    cin >> v4;

    if (v1 > v2 && v1 > v3 && v1 > v4 ) {
        cout << "\n\n\t\t\t " << v1 << " is the highest number. " << endl ;
    }
    else if (v2 > v1 && v2 > v3 && v3 > v4){
        cout << "\n\n\t\t\t " << v2 <<  " is the highest number. " ;
    }
    else if (v3 > v1 && v3 > v2 && v3 > v4){
        cout << "\n\n\t\t\t " << v3 << " is the highest number. " ;
    }
    else{
        cout << "\n\n\t\t\t " << v4 << " is the highest number. ";
    }
}


void avg_calcu(){
    int number_of_grades;
    double grade, sum=0, avg;

    cout << "\n\t\t\t Enter number of grades: ";
    cin >> number_of_grades;
    cout << endl;
    for(int i = 1; i <= number_of_grades; i++){
        cout << "\t\t\t Enter grade no."<< i <<" : ";
        cin >> grade;
        sum = sum + grade; // getting the sum of grade input
    }

    avg = sum / number_of_grades;

    system("cls");
    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|          AVERAGE GRADE CALCULATOR           |\n\t\t\t-----------------------------------------------\n\n";
    cout << "\n\t\t\t Calculating";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    system("cls");

    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|          AVERAGE GRADE CALCULATOR           |\n\t\t\t-----------------------------------------------\n\n";

    if(avg == 100 && avg >= 98){
        cout << "\n\n\t\t\tYour average " << avg << " is equivalent to 1.00" << endl;
    }
    else if(avg <= 97 && avg >=95){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 1.25" << endl;
    }
    else if(avg <= 94 && avg >=91){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 1.50" << endl;
    }
    else if(avg <= 90 && avg >=88){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 1.75" << endl;
    }
    else if(avg <= 87 && avg >=85){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 2.00" << endl;
    }
    else if(avg <= 84 && avg >=82){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 2.25" << endl;
    }
    else if(avg <= 81 && avg >=79){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 2.50" << endl;
    }
    else if(avg <= 78 && avg >=76){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 2.75" << endl;
    }
    else if(avg == 75){
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 3.00" << endl;
    }
    else{ // if all condition above are not met
        cout << "\n\n\t\t\t Your average " << avg << " is equivalent to 5.00" << endl;
    }
}


void calculator(){
    char op_input;
    double result, num1, num2;

    cout << "\n\t\t\t Enter number 1: ";
    cin >> num1;
    cout << "\t\t\t Enter number 2: ";
    cin >> num2;
    cout << "\n\t\t\t Select operator ( + , - , * , / ): ";
    cin >> op_input;
    system("cls");
    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|                 CALCULATOR                  |\n\t\t\t-----------------------------------------------\n\n";
    cout << "\n\t\t\t Calculating";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    system("cls");

    cout << "\n\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t|                 CALCULATOR                  |\n\t\t\t-----------------------------------------------\n\n";
    if(op_input == '+'){
        result = num1 + num2;
        cout << "\n\n\t\t\t " << num1 << " + " << num2 << " = " << result << endl;
    }
    else if(op_input == '-'){
        result = num1 - num2;
        cout << "\n\n\t\t\t " << num1 << " - " << num2 << " = " << result << endl;
    }
    else if(op_input == '*'){
        result = num1 * num2;
        cout << "\n\n\t\t\t " << num1 << " * " << num2 << " = " << result << endl;
    }
    else if(op_input == '/'){
        result = (double)num1 / (double)num2;
        cout << "\n\n\t\t\t " << num1 << " / " << num2 << " = " << result << endl;
    }
    else{
        cout << "\n\n\t\t\t " << "Invalid operator.\n";
    }
}


void inc_loop(){
    int start, endv;

	cout << "\n\t\t\t Note: Starting value must be lower than limit.";
	cout << endl;
	sleep(1);
    cout << "\n\n\t\t\t   Enter starting value: ";
    cin >> start;
    cout << "\t\t\t   Enter limit: ";
    cin >> endv;
	cout << "\n";
    for(int i = start; i <= endv; i++){
        cout << "\t\t\t " << i << endl;
    }
}


void dec_loop(){
    int endv, start;
	cout << "\n\t\t\t Note: Starting point must be lower than";
	cout << "\n\t\t\t       end value.";
	cout << endl;
	sleep(1);
	cout << "\n\n\t\t\t   Enter starting point: ";
    cin >> start;
    cout << "\t\t\t   Enter end value: ";
    cin >> endv;
    cout << "\n";
    for(int i = endv; i >= start; i--){
        cout << "\t\t\t " << i << endl;
    }

}


void compilation(){
    int menuChoice;

    do{
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|         CDM PROGRAMMING ACTIVITIES          |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t\t(1) Hello World\n";
        cout << "\t\t\t\t(2) House\n";
        cout << "\t\t\t\t(3) Lowest Number Identifier\n";
        cout << "\t\t\t\t(4) Highest Number Identifier\n";
        cout << "\t\t\t\t(5) Average Grade Calculator\n";
        cout << "\t\t\t\t(6) Calculator\n";
        cout << "\t\t\t\t(7) Increment Looping\n";
        cout << "\t\t\t\t(8) Decrement Looping\n";
        cout << "\t\t\t\t(0) Logout\n";
        cout << "\n\t\t\t_______________________________________________\n";
        cout << "\n\t\t\tChoice (0-8): ";
        cin >> menuChoice;
        sleep(1);
        system("cls");

        if(menuChoice==1){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                 HELLO WORLD                 |\n\t\t\t-----------------------------------------------\n\n\n\t\t\t\t\t  ";
                sleep(1);
                hello_world();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                 HELLO WORLD                 |\n\t\t\t-----------------------------------------------\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);

        }
        else if(menuChoice==2){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                    HOUSE                    |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                house();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                    HOUSE                    |\n\t\t\t-----------------------------------------------\n\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==3){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|           LOWEST NUMBER IDENTIFIER          |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                lower_number();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|           LOWEST NUMBER IDENTIFIER          |\n\t\t\t-----------------------------------------------\n\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==4){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|          HIGHEST NUMBER IDENTIFIER          |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                higher_number();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|          HIGHEST NUMBER IDENTIFIER          |\n\t\t\t-----------------------------------------------\n\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==5){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|          AVERAGE GRADE CALCULATOR           |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                avg_calcu();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|          AVERAGE GRADE CALCULATOR           |\n\t\t\t-----------------------------------------------\n\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==6){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                 CALCULATOR                  |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                calculator();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|                 CALCULATOR                  |\n\t\t\t-----------------------------------------------\n\n";
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==7){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|              INCREMENT LOOPING              |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                inc_loop();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|              INCREMENT LOOPING              |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==8){
            do{
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|              DECREMENT LOOPING              |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                dec_loop();
                sleep(1.5);
                cout << "\n\n\n\t\t\t   (1) Display again\n";
                cout << "\t\t\t   (0) Back\n";
                cout << "\n\n\t\t\t   Choice: ";
                cin >> menuChoice;
                system("cls");
                cout << "\n\n\t\t\t-----------------------------------------------";
                cout << "\n\t\t\t|              DECREMENT LOOPING              |\n\t\t\t-----------------------------------------------\n\n";
                sleep(1);
                cout << "\n\t\t\t Loading";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                cout << ".";
                sleep(1);
                system("cls");
            }while(menuChoice==1);
        }
        else if(menuChoice==0){
            system("cls");
            sleep(1);
            cout << "\n   Logging out";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
            sleep(1);
            cout << ".";
            sleep(1);
            system("cls");
            menu();
        }
        else{
            cout << "Invalid input. Try again\nMenu\n\n";
            compilation();
            system("cls");
        }
    }while(menuChoice==0);
}


void menu(){
    int menuChoice;
    system("cls");
    do{
        cout << "\n\n\t\t\t-----------------------------------------------";
        cout << "\n\t\t\t|                  MAIN MENU                  |\n\t\t\t-----------------------------------------------\n";
        cout << "\n\t\t\t\t(1) Login";
        cout << "\n\t\t\t\t(2) Register";
        cout << "\n\t\t\t\t(3) Forgot Password";
        cout << "\n\t\t\t\t(4) Delete Account";
        cout << "\n\t\t\t\t(5) Exit Program\n";
        cout << "\n\t\t\t_______________________________________________\n";
        cout << "\n\t\t\tChoice: ";
        cin >> menuChoice;
        sleep(1);

        switch(menuChoice){
            case 1:
                login();
                system("cls");
                compilation();
                break;
            case 2:
                do{
                    acc_reg();
                    cout << "\n(1) Try again\n";
                    cout << "(0) Back\n";
                    cin >> menuChoice;
                    sleep(2);
                    system("cls");
                }while(menuChoice==1);
                break;
            case 3:
                do{
                    forgot();
                    cout << "\n\n\t\t\t  (1) Try again\n";
                    cout << "\t\t\t  (0) Back\n";
                    cout << "\n\n\t\t\t Choice: ";
                    cin >> menuChoice;
                    sleep(2);
                    system("cls");
                }while(menuChoice==1);
                break;
            case 4:
                do{
                    delete_usr();
                    cout << "\n\n\t\t\t  (1) Again\n";
                    cout << "\t\t\t  (0) Back\n";
                    cout << "\n\n\t\t\t Choice: ";
                    cin >> menuChoice;
                    sleep(2);
                    system("cls");
                }while(menuChoice==1);
                break;
            case 5:
                system("cls");
                cout << "Are you sure you want to exit?\n\n";
                cout << "   (1) Yes \n   (0) No\n\n";
                cout << "Choice: ";
                cin >> menuChoice;
                if(menuChoice==0){
                    menu();
                }
                else if(menuChoice==1){
                    break;
                }
                else{
                    cout << "invalid input\n";
                }
                break;
            default:
                menu();
                break;
        }
    }while(menuChoice==0);
}


int main(){

    int menuChoice;
    group();
    loading();
    menu();
    system("cls");
}
