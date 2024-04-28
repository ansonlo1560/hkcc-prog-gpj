// ConsoleApplication7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// ConsoleApplication7.cpp :
//
#include<iostream>
#include <iomanip>
#include<cstring>
#include<stdio.h>
#include<cmath>
#include<ctime>
using namespace std;
class redemption
{
public:

    void load()
    {
        // Load the starting data

        // Gift IDs
        strcpy_s(giftid[0], sizeof(giftid[0]), "A01");
        strcpy_s(giftid[1], sizeof(giftid[1]), "A02");
        strcpy_s(giftid[2], sizeof(giftid[1]), "A03");
        strcpy_s(giftid[3], sizeof(giftid[2]), "B01");
        strcpy_s(giftid[4], sizeof(giftid[3]), "B02");
        strcpy_s(giftid[5], sizeof(giftid[4]), "B03");
        strcpy_s(giftid[6], sizeof(giftid[5]), "B04");
        strcpy_s(giftid[7], sizeof(giftid[6]), "B05");
        strcpy_s(giftid[8], sizeof(giftid[7]), "C01");
        strcpy_s(giftid[9], sizeof(giftid[8]), "C02");
        strcpy_s(giftid[10], sizeof(giftid[9]), "C03");
        strcpy_s(giftid[11], sizeof(giftid[10]), "C04");
        strcpy_s(giftid[12], sizeof(giftid[11]), "D01");
        strcpy_s(giftid[13], sizeof(giftid[12]), "D02");
        strcpy_s(giftid[14], sizeof(giftid[13]), "D03");

        // Descriptions
        strcpy_s(des[0], sizeof(des[0]), "LG Internet TV");
        strcpy_s(des[1], sizeof(des[1]), "Pioneer Hifi Set");
        strcpy_s(des[2], sizeof(des[2]), "Sony DVD Player");
        strcpy_s(des[3], sizeof(des[3]), "Healthy Air Fryer");
        strcpy_s(des[4], sizeof(des[4]), "Tefal Microwave Oven");
        strcpy_s(des[5], sizeof(des[5]), "Famous Coffee Maker");
        strcpy_s(des[6], sizeof(des[6]), "Smart Rice Cooker");
        strcpy_s(des[7], sizeof(des[7]), "TechCook Toaster Oven");
        strcpy_s(des[8], sizeof(des[8]), "WellCome 50 Coupon");
        strcpy_s(des[9], sizeof(des[9]), "Mannings 50 Coupon ");
        strcpy_s(des[10], sizeof(des[10]), "Carol Restaurant 100 Coupon");
        strcpy_s(des[11], sizeof(des[11]), "Shell 200 Coupon ");
        strcpy_s(des[12], sizeof(des[12]), "Clever Headset");
        strcpy_s(des[13], sizeof(des[13]), "HP Optic Mouse");
        strcpy_s(des[14], sizeof(des[14]), "Stylish Bluetooth Speaker");

        // Customer IDs
        strcpy_s(customer_ID[0], sizeof(customer_ID[0]), "Tommy2015");
        strcpy_s(customer_ID[1], sizeof(customer_ID[1]), "DavidChan");
        strcpy_s(customer_ID[2], sizeof(customer_ID[2]), "Luna123");
        strcpy_s(customer_ID[3], sizeof(customer_ID[3]), "TigerMan");
        strcpy_s(customer_ID[4], sizeof(customer_ID[4]), "Max5678");
        strcpy_s(customer_ID[5], sizeof(customer_ID[5]), "Neo2000");
        strcpy_s(customer_ID[6], sizeof(customer_ID[6]), "CCTang");
        strcpy_s(customer_ID[7], sizeof(customer_ID[7]), "EchoWong");
        strcpy_s(customer_ID[8], sizeof(customer_ID[8]), "Rubychow");
        strcpy_s(customer_ID[9], sizeof(customer_ID[9]), "Ivy2023");

        // Rank
        strcpy_s(Rank, sizeof(Rank), "BBBBSSSGGG");

        // Prices
        price[0] = 3900;
        price[1] = 2400;
        price[2] = 400;
        price[3] = 1500;
        price[4] = 480;
        price[5] = 1800;
        price[6] = 600;
        price[7] = 450;
        price[8] = 50;
        price[9] = 50;
        price[10] = 100;
        price[11] = 200;
        price[12] = 350;
        price[13] = 250;
        price[14] = 800;

        // Requirements
        require[0] = 19000;
        require[1] = 11500;
        require[2] = 2000;
        require[3] = 7300;
        require[4] = 2400;
        require[5] = 8800;
        require[6] = 2900;
        require[7] = 2250;
        require[8] = 250;
        require[9] = 250;
        require[10] = 500;
        require[11] = 960;
        require[12] = 1750;
        require[13] = 1250;
        require[14] = 3900;

        // Credit Card Limits
        CC[0] = 8500;
        CC[1] = 22800;
        CC[2] = 650;
        CC[3] = 14000;
        CC[4] = 2580;
        CC[5] = 8000;
        CC[6] = 33554;
        CC[7] = 8650;
        CC[8] = 28000;
        CC[9] = 12340;


        //After loading, show the successful message, then display Menu again.
        cout << "\nsuccessful load!\n\n";
        Menu();
    }

    void displayData()
    {
        // Display the loaded data using setw to format the output
        for (int i = 0; i < 15; i++) {
            cout << setw(5) << giftid[i];
            cout << setw(25) << des[i];
            cout << setw(10) << price[i];
            cout << setw(10) << require[i] << endl;
        }

        for (int i = 0; i < 10; i++) {
            cout << setw(15) << customer_ID[i];
            cout << setw(10) << Rank[i];
            cout << setw(15) << CC[i] << endl;
        }
    }

    void record() {

        int pos = 0;

        int d[100] = { 1 };
        char e[100] = { 1 };
        //use e[f] to extrieve all the customers first letter.
        for (int f = 0; f < a; f++) {
            e[f] = customer_ID[f][0];


        }
        cout << endl;
        for (int j = 0; j < a; j++) {
            for (int k = 0; k <= a - 1; k++) {

                if (e[k] > large) {
                    large = e[k];
                    pos = k;
                }
                //continuely find the largest letter and record the position into d[j] in order.

            }
            d[j] = pos;

            e[pos] = '!';//make the largest letter to a small number in ASCii .

            large = '+';



        }
        //show data in alphabet order.
        cout << "Customer_Name";
        cout << "  " << "\t";
        cout << "Rank" << "\t" << "CC";
        cout << endl;
        for (int row = 1; row <= 100; row++) { cout << "-"; }
        cout << endl;
        for (int j = 0; j <= a - 1; j++) {
            cout << customer_ID[d[j]];
            cout << "  " << "\t";
            cout << Rank[d[j]] << "\t" << CC[d[j]];
            cout << endl;
        }
        cout << endl;
        for (int row = 1; row <= 100; row++) { cout << "-"; }
        cout << endl;
        //Downarrow
        cout << "   " << "----" << endl;
        for (int y = 0; y <= 5; y++)
        {
            if (y == 5)
            {
                for (int x = 1; x <= 10; x++)
                {
                    if (x >= 0 && x < 4 || x>7 && x <= 10) { cout << "-"; }
                    else { cout << " "; }
                }break;
            }
            else if (y >= 0) { cout << "   " << "|" << "  " << "|" << endl; }
            else{ cout << " "; }
        }cout << endl;
        for (int row = 1; row <= 10; row++)
        {
            for (int col = 1; col <= 10; col++)
            {
                if (col == row) { cout << "\\"; }
                else if (col + row == 10 + 1) { cout << "/"; }
                else { cout << " "; }
                if (row >= 6)
                {
                    cout << " ";
                    col = 10;
                    row = 10;
                }
            }cout << endl;
        }//Downarrow End
        for (int row = 1; row <= 100; row++) { cout << "="; }//Line
        cout << endl;
        cout << "Giftid" << "\t";
        cout << "Description";
        
        for (int i = 1; i <= 30; i++) { cout << ""; }
        cout <<"\t\t\t\t"<<"|"<<"Price"<<"| "<<"\t"<< "|" << "CC Requirement" << "| " << endl;
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        
        for (int j = 0; j < 15; j++) {
            cout << left<<giftid[j] << "\t"<< des[j];
            for (int i = 1; i <= 40 - strlen(des[j]); i++) { cout << " "; }
            
            cout << "|$" << price[j] <<"|" <<"\t\t" << "|" << require[j] << "|" << endl;
            for (int row = 1; row <= 100; row++) { cout << "-"; }
            cout << endl;
        }
        cout << endl;
        for (int row = 1; row <= 100; row++) { cout << "-"; }
        cout << endl;
        Menu();

    }
    void edit_costomer() {
        char user[51];
        cout << "Please input your ID:";
        cin >> user;
        int same = 0;//check the same letter the inputID have compared to all customers'name
        int len = strlen(user);
        int pos;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < len; j++) {
                if (user[j] == customer_ID[i][j]) {
                    same++;
                }
            }
            if (same == len)//same == len mean old customer
            {
                pos = i;
                break;
            }
            else { same = 0; }//same == len mean new customer
        }
        if (same == 0)
        {
            cout << "would you want to add this new account into system? 'y'or'n'";
            char check;
            cin >> check;
            if (check == 'y') {
                a = a + 1;
                int k, b, c;
                cout << "To add your account, please input the date that the you became a member(in the format DD / MM / YYYY)\n";
                //check whether day,month,year fit to the range
                do {
                    for (int row = 1; row <= 100; row++) { cout << "="; }
                    cout << endl;//Line
                    cout << "Plase enter your joinning day(DD): ";
                    cin >> k;
                   
                    if (!cin.fail() && k > 0 && k <= 30) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                do {
                    for (int row = 1; row <= 100; row++) { cout << "="; }
                    cout << endl;//Line
                    cout << "Please enter your joinning month(MM):";
                    cin >> b;
                    for (int row = 1; row <= 100; row++) { cout << "="; }
                    cout << endl;//Line
                    if (!cin.fail() && b > 0 && b <= 12) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                do {
                
                    cout << "Plase enter your joinning year(YYYY): ";
                    cin >> c;
                    for (int row = 1; row <= 100; row++) { cout << "="; }
                    cout << endl;//Line
                    if (!cin.fail() && c > 1970 && c <= 2024) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                //((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) is time pass from 1970/1/1.
                //time(0) is current time pass from 1970/1/1
                if (time(0) - ((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) >= 365 * 24 * 60 * 60) {
                    Rank[a - 1] = 'G';
                }
                else if (time(0) - ((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) < 365 * 24 * 60 * 60 && ((a - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60 - time(0)) >= 6 * 30 * 24 * 60 * 60) {
                    Rank[a - 1] = 'S';
                }
                else {
                    Rank[a - 1] = 'B';
                }

                /**
                if (time(0) - ((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) >= 365 * 24 * 60 * 60) {
                    Rank[a - 1] = 'G';
                }
                if (time(0) - ((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) < 365 * 24 * 60 * 60 && ((a - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60 - time(0)) >= 6 * 30 * 24 * 60 * 60) {
                    Rank[a - 1] = 'S';
                }
                else {
                    Rank[a - 1] = 'B';
                }
                */

                cout << "Please enter points balance value:\n";
                int v;

                cin >> v;
                CC[a - 1] = v;

                strcpy_s(customer_ID[a - 1], sizeof(customer_ID[9]), user);
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                cout << "Successful Add!\n";
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                Menu();
            }
            if (check == 'n') { Menu(); }
        }
        else
        {
            cout << "would you want to delete this new account from system? 'y'or'n'";
            char check2;
            cin >> check2;
            if (check2 == 'y')
            {
                cout << "successful delete!\n";
                a = a - 1;
                //delete position customer withnd swap the last customer to the position.
                for (int i = 0; i <= 30; i++) {
                    customer_ID[pos][i] = ' ';
                    customer_ID[pos][i] = customer_ID[a][i];
                    customer_ID[a][i] = ' ';
                }
                Rank[pos] = Rank[a];
                Rank[a] = ' ';
                price[pos] = price[a];
                price[a] = 0;
                Menu();
            }
            if (check2 == 'n') { Menu(); }
        }

    }
    void custome_log() {//this function is to check whether the input customerID is correct
        cout << "Please input your CustomerID:";
        char user[51];
        cin >> user;
        int same = 0;
        int len = strlen(user);//check whether the input customerID is correct

        for (int i = 1; i <= 3; i++)//3 attempt times
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < len; j++) {
                    if (user[j] == customer_ID[i][j]) {
                        same++;
                    }
                }
                if (same == len)
                {
                    pos = i;
                    break;
                }
                else { same = 0; }
            }
            if (same == 0) {
                cout << "Error, please input again!";
                if (i == 3) { Menu(); }
            }
            else {
                strcpy_s(customerName, user);
                break;
            }
        }
        cout << "Successful login! How can we help you today?\n";
    }
    void custome_view()
    {//R4
        cout << endl;

        cout << "Action for Customer ID: " << customerName << endl;
        cout << "*****Customer View Menu *****\n";
        cout << "[1] Earn CC Points\n";
        cout << "[2] Redeem Gifts\n";
        cout << "[3] Modify CC Points Balance\n";
        cout << "[4] Return to Main Menu\n";
        cout << "************************** \n";
        cout << "Option(1 - 4) :";
        int b;
        cin >> b;
        switch (b) {
        case 1:earn(); break;
        case 2:redeem(); break;
        case 3:modify(); break;
        case 4:return_(); break;
        default:break;
        }

    }
    void earn() {
        float a;
        cout << " Please input the amount of money spent for converting to CC points.\n";
        cin >> a;
        int b = floor(a);
        His_E_S[pos][0][0] = His_E_S[pos][0][0] + 1;
        His_E_S[pos][0][His_E_S[pos][0][0]] = a;
        His_E_O[pos][0][0] = His_E_O[pos][0][0] + 1;
        His_E_O[pos][0][His_E_O[pos][0][0]] = CC[pos];//record history
        CC[pos] = CC[pos] + (a - b % 250) / 250;
        His_E_M[pos][0][0] = His_E_M[pos][0][0] + 1;
        His_E_M[pos][0][His_E_M[pos][0][0]] = (a - b % 250) / 250;//count into CCpoints notice:int b = floor(a)
        cout << "Your CCpoints wallet is richer";
        cout << endl;
        custome_view();

    }
    void redeem() {
        float b;
        char extra = ' ';
        if (Rank[pos] == 'G') {
            b = 0.9;
        }
        else if (Rank[pos] == 'S') {
            b = 0.95;
        }
        else {
            b = 1;
        }
        cout << "choose a category of your gift.(A/B/C/D):\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Giftid" << "\t\t" << "Description" << "\t\t\t" << "Price" << "\t\t" << "Require" << "\t\t" << "Need extra money?" << endl;
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        char f;
        int a[15] = { 0 };
        int d[15] = { 0 };
        int large = 0;
        int site;

        cin >> f;
        switch (f)
        {
        case 'A':

            for (int j = 0; j < 3; j++) {
                a[j] = require[j];
            }
            for (int j = 0; j < 3; j++) {
                for (int i = 0; i < 3; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 0; j < 3; j++) {
                cout << "|"<<giftid[d[j]]<<"|" << "\t\t";
                for (int i = 0; i < 20; i++) {
                    cout <<des[j][i];
                 
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t\t" << "|$"<<price[d[j]]<<"|" << "\t\t" << "|"<<require[d[j]] * b << extra<<"|";
                cout << endl;
            }
            cout << endl;
            choose();
            cout << endl;
            break;

        case 'B':
            for (int j = 3; j < 8; j++)
            {
                a[j] = require[j];
            }
            for (int j = 3; j < 8; j++) {
                for (int i = 3; i < 8; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 3; j < 8; j++) {
                cout << "|"<<giftid[d[j]]<<"|" << "\t\t";
                for (int i = 0; i < 20; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t\t" << "|$" << price[d[j]] << "|" << "\t\t" << "|" << require[d[j]] * b << extra << "|";
                cout << endl;
            }
            cout << endl;
            choose();
            cout << endl;
            break;
        case 'C':
            for (int j = 8; j < 12; j++) {
                a[j] = require[j];
            }
            for (int j = 8; j < 12; j++) {
                for (int i = 8; i < 12; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 8; j < 12; j++) {
                cout << "|" << giftid[d[j]] << "|" << "\t\t";
                for (int i = 0; i < 20; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t\t" <<"|$" << price[d[j]] << "|" << "\t\t" << "|" << require[d[j]] * b << extra << "|";
                cout << endl;
            }
            cout << endl;
            choose();
            cout << endl;
            break;
        case 'D':

            for (int j = 12; j < 15; j++) {
                a[j] = require[j];
            }
            for (int j = 12; j < 15; j++) {
                for (int i = 12; i < 15; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 12; j < 15; j++) {
                cout << "|" << giftid[d[j]] << "|" << "\t\t";
                for (int i = 0; i < 20; i++) {
                    cout << des[j][i];
                }
            
                
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t\t" <<"|$" << price[d[j]] << "|" << "\t\t" << "|" << require[d[j]] * b << extra << "|";
                cout << endl;
                
            }
            for (int row = 1; row <= 100; row++) { cout << "="; }
            cout << endl;//Line
            cout << endl;
            choose();
            cout << endl;
            break;

        default:cout << "Error";
            break;
        }
    }

    void choose() {//select the gift for redemption
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Input gift ID:\n";
        float b;
        int extra = 0;
        if (Rank[pos] == 'G') {
            b = 0.9;
        }
        else if (Rank[pos] == 'S') {
            b = 0.95;
        }
        else {
            b = 1;
        }
        int same = 0;
        char user[3];
        int pos_g = 0;
        for (int i = 1; i <= 3; i++)//3 attempt times
        {
            cin >> user;
            for (int i = 0; i < 15; i++)
            {
                for (int j = 0; j < 3; j++) {
                    if (user[j] == giftid[i][j]) {
                        same++;
                    }
                }
                if (same == 3)
                {
                    pos_g = i;
                    break;
                }
                else { same = 0; }
            }
            if (same == 0) {
                cout << "Error, please input again!";
                if (i == 3) { Menu(); }
            }
            else {
                break;
            }
        }//check which gift user want to choose
        His_Rem[pos][0][0] = His_Rem[pos][0][0] + 1;
        His_Rem[pos][0][His_Rem[pos][0][0]] = pos_g;//record into history 禮物位置


        cout << "Please input the amount of CC points used for redemption: \n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        int k; //PLEASE NAME VARIABLE WITH MEANINGFUL NAME!

        for (int i = 1; i <= 3; i++) {
            cin >> k;
            if (cin.fail() || k > CC[pos] || k < 0) {
                cout << "Error\n";
                if (i == 3) { Menu(); }
            }
            else { break; }
        }
        int  use_CCpoint = 0;
        if (k < require[pos_g]) {
            int same = 0;
            //extra = ((19000 * 1) - (15000)) = 4000 CC pt = $800
            //extra = (CC_require * discount - paid_CC_point) * 0.2
            extra = round((require[pos_g] * b - k) * 0.2);
            His_Rem_E[pos][0][0] = His_Rem_E[pos][0][0] + 1; //pos ... pos_g
            His_Rem_E[pos][0][His_Rem[pos][0][0]] = extra;
            use_CCpoint = k;
        }
        cout << "This is " << extra<<"\n";

        if (k >= require[pos_g]) {
            use_CCpoint = require[pos_g];
        }
        for (int row = 1; row <= 100; row++) { cout << "!"; }
        cout << endl;//Line
        cout << "Are you confirm that using " << k << "CC point and   " << extra << " extra money for this gift?\n "<<endl;
        for (int row = 1; row <= 100; row++) { cout << "!"; }
        cout << endl;//Line
        cout<<"\nNotice: input \"Y\" or \"N\"\n"<<endl;
        for (int row = 1; row <= 100; row++) { cout << "!"; }
        cout << endl;//Line
        //Downarrow
        cout << "   " << "----" << endl;
        for (int y = 0; y <= 5; y++)
        {
            if (y == 5)
            {
                for (int x = 1; x <= 10; x++)
                {
                    if (x >= 0 && x < 4 || x>7 && x <= 10) { cout << "-"; }
                    else { cout << " "; }
                }break;
            }
            else if (y >= 0) { cout << "   " << "|" << "  " << "|" << endl; }
            else { cout << " "; }
        }cout << endl;
        for (int row = 1; row <= 10; row++)
        {
            for (int col = 1; col <= 10; col++)
            {
                if (col == row) { cout << "\\"; }
                else if (col + row == 10 + 1) { cout << "/"; }
                else { cout << " "; }
                if (row >= 6)
                {
                    cout << " ";
                    col = 10;
                    row = 10;
                }
            }cout << endl;
        }//Downarrow End
        
        char u;
        bool valid = false;

        do {
            cout << "\nPlease enter 'Y' or 'N': "<<endl;
            cin >> u;

            if (u == 'Y' || u == 'N') {
                valid = true;
            }
            else {
                cout << "\nInvalid input. Please try again." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.clear();
            }
        } while (!valid);
        //  His_Rem_E[pos_g][0][0] is record history time and His_Rem_E[pos_g][0][His_Rem[pos_g][0][0]] is the recorded history this time.
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Thanks for your redemption!\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        His_Rem_O[pos][0][0] = His_Rem_O[pos][0][0] + 1;
        His_Rem_O[pos][0][His_Rem[pos][0][0]] = CC[pos];
        CC[pos] = CC[pos] - use_CCpoint;
        His_Rem_F[pos][0][0] = His_Rem_E[pos][0][0] + 1;
        His_Rem_F[pos][0][His_Rem[pos][0][0]] = CC[pos];
        custome_view();
    }
    void modify() {
        cout << "\nPlease input of a new CC Points Balance value:";
        int a;
        cin >> a;
        int b;
        if (a > CC[pos]) {
            b = 1;
        }
        else if (a < CC[pos]) {
            b = -1;
        }
        if (a == CC[pos]) {
            b = 0;
        }


        His_Mo_T[pos][0][0] = His_Mo_T[pos][0][0] + 1;
        His_Mo_T[pos][0][His_Mo_T[pos][0][0]] = b;
        His_Mo_O[pos][0][0] = His_Mo_O[pos][0][0] + 1;
        His_Mo_O[pos][0][His_Mo_O[pos][0][0]] = CC[pos];

        CC[pos] = a;
        His_Mo_F[pos][0][0] = His_Mo_F[pos][0][0] + 1;
        His_Mo_F[pos][0][His_Mo_F[pos][0][0]] = CC[pos];
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Successful modify\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        custome_view();
    }

    void return_() {
        Menu();
    }

    void history() // R5:Show Transaction History 
    {
        cout << endl;
        cout << "Please input your Customer ID: ";
        char user[51];
        cin >> user;
        int same = 0;
        int len = strlen(user);
        cout << endl;

        // Find the customer ID in the system
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < len; j++) {
                if (user[j] == customer_ID[i][j]) {
                    same++;
                }
            }
            if (same == len) {
                pos_h = i;
                break;
            }
            else {
                same = 0;
            }
        }

        if (same == 0) {
            cout << "Error: Customer ID not found!" << endl;
            Menu();
            return;
        }

        cout << "CC Points Transaction Records History:\n";
        cout << "--------------------------------------\n";//visual separator
        cout << "Earn CC Points:\n";
        cout << "Spent" << "\t" << "Original" << "\t" << "EarnCCpoint" << "\t" << "Final\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        // Check if any earn CC points transactions recorded
        if (His_E_S[pos_h][0][0] == 0) {
            cout << "No transaction records found.\n\n";
        }
        else {


            // Display the earn CC points transactions
            for (int i = 1; i <= His_E_S[pos_h][0][0]; i++) {
                cout << His_E_S[pos_h][0][i] << "\t";
                cout << His_E_O[pos_h][0][i] << "\t\t";
                cout << His_E_M[pos_h][0][i] << "\t\t";
                cout << His_E_O[pos_h][0][i] + His_E_M[pos_h][0][i] << endl;
                // Update the final balance

            }


            // Display the summary information
            for (int row = 1; row <= 100; row++) { cout << "="; }
            cout << endl;//Line
            cout << "Summary:\n";
            for (int row = 1; row <= 100; row++) { cout << "="; }
            cout << endl;//Line
            cout << "Original CC Points Balance: " << His_E_O[pos_h][0][1] << endl;
            cout << "Final CC Points Balance: " << CC[pos_h] << endl;
            cout << "Change in CC Points Balance: " << CC[pos_h] - His_E_O[pos_h][0][1] << endl;

            cout << "--------------------------------------\n\n"; //visual separator
        }
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Redeem Gifts:\n";
        cout << "Gift ID" << "\t" << "Description" << "\t" << "Original" << "\t" << "Final" << "\t" << "Extra Money\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line

        // Check if any redeem gifts transactions recorded
        if (His_Rem_O[pos_h][0][0] == 0) {
            cout << "No redemption records found.\n\n";
            cout << "--------------------------------------\n\n";
        }
        else {
            // Display the redeem gifts transactions
            for (int i = 1; i <= His_Rem_O[pos_h][0][0]; i++) {
                for (int j = 0; j <= 2; j++) {
                    cout << giftid[His_Rem[pos_h][0][i]][j] ;
                }
                cout << "\t";
                for (int j = 1; j <= 30; j++) {
                    cout << des[His_Rem[pos_h][0][i]][j] ;
                }
                cout << "\t";
                cout << His_Rem_O[pos_h][0][i] << "\t";
                cout << His_Rem_F[pos_h][0][i] << "\t";
                cout << His_Rem_E[pos_h][0][i] << endl;//His_Rem_E[pos_g]

 }

            cout << "--------------------------------------\n\n"; //visual separator
        }
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line
        cout << "Modify CC Points Balance:\n";
        cout << "Type" << "\t" << "Original" << "\t" << "Final\n";
        for (int row = 1; row <= 100; row++) { cout << "="; }
        cout << endl;//Line

        // Check if any modify CC points balance transactions recorded
        if (His_Mo_T[pos_h][0][0] == 0) {
            cout << "No modification records found.\n";
        }
        else {
            // Display the modify CC points balance transactions
            for (int i = 1; i <= His_Mo_T[pos_h][0][0]; i++) {
                cout << His_Mo_T[pos_h][0][i] << "\t";//A0X
                cout << His_Mo_O[pos_h][0][i] << "\t";// Original
                cout << His_Mo_F[pos_h][0][i] << "\t\t\t" <<endl;// Final
            }
        }

        cout << "--------------------------------------\n\n"; //visual separator
        Menu(); //back to the Menu
    }

    void edit() // R6:Credits and Exit 
    {
        char u;
        bool valid = false;

        do {
            cout << "Please enter 'Y' or 'N': "; // Prompt the user for confirmation
            cin >> u;

            if (u == 'Y' || u == 'y') // Allow user input 'Y' or 'y'
            {
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                cout << setw(20) << left << "Student Name" << setw(10) << right << "StudentID" << setw(15) << right << "    Tutorial Group\n"; // Print table headers
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                cout << setw(20) << left << "Zhan zhixiang" << setw(10) << right << "23081406A" << setw(13) << right << "B04\n"; // Print each row of the table
                cout << setw(20) << left << "HUANG Kaicong" << setw(10) << right << "21059188A" << setw(13) << right << "B04\n";
                cout << setw(20) << left << "LO Ho Nam" << setw(10) << right << "23004216A" << setw(13) << right << "B04\n";
                cout << setw(20) << left << "Yip Chin Tung" << setw(10) << right << "22063753A" << setw(13) << right << "B04\n";
                cout << setw(20) << left << "TONG Wai Fan" << setw(10) << right << "23172840A" << setw(13) << right << "B04\n";
                cout << setw(20) << left << "Wong Tsz Tung" << setw(10) << right << "22002723A" << setw(13) << right << "B04\n";
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                cout << "-------" << "\t" << "|" << "\t" << "     " << "\t" << "     " << "\t" << "|" << endl;
                cout << "   |   " << "\t" << "|" << "\t" << "/---\\" << "\t" << "|---\\" << "\t" << "|  /" << endl;
                cout << "   |   " << "\t" << "|___" << "\t" << "|   |" << "\t" << "|   |" << "\t" << "|/" << endl;
                cout << "   |   " << "\t" << "|   |" << "\t" << "|   |" << "\t" << "|   |" << "\t" << "|\\" << endl;
                cout << "   |   " << "\t" << "|   |" << "\t" << "\\___/\\" << "\t" << "|   |" << "\t" << "|  \\" << endl;
                for (int row = 1; row <= 100; row++) { cout << "="; }
                cout << endl;//Line
                valid = true;  // Set valid to true to exit the loop
            }
            else if (u == 'N' || u == 'n') // Call the Menu() function to return to the main menu
            {
                valid = true;  // Set valid to true to exit the loop
            }
            else // Handle invalid input
            {
                cout << "Invalid input. Please try again." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.clear();
            }
        } while (!valid); // Continue looping until a valid input is provided
    }

    void setsize(int col, int row)
    {
        char cmd[64];
        sprintf_s(cmd, sizeof(cmd), "mode con cols=%d lines=%d", col, row);
        system(cmd);
    }

    void Menu()
    {
        
      
        char opt;
        int type[20]{ 1,2,3,4,5,6 };//delete the value to close the option if it has bugs

        cout << "\n*****************\n" << "Welcome Message designed by your group\n" << "***Main Menu***" << endl;

        cout << "[" << type[0] << "]" << "Load Starting Data\n" << "[" << type[1] << "]" << "Show Records\n" //show option 
            << "[" << type[2] << "]" << "Edit Customers\n" << "[" << type[3] << "]" << "Enter Customer View\n"
            << "[" << type[4] << "]" << "Show Transaction History\n" << "[" << type[5] << "]" << "Credits and Exit\n" << "*****************" << endl;
        cout << "Option(1-6): " << endl;//show total of options
        cin >> opt;
       
        
        switch (opt) {
        case '1':load(); break;
        case '2': record(); break;
        case '3':edit_costomer(); break;
        case '4': custome_log();
            custome_view(); break;
        case '5':history(); break;
        case '6':edit(); break;
        default:
            cout << "No option " << opt << endl;//checking
            break;
        }
    }
private:
    char giftid[15][4];
    char des[15][150];
    int require[15];
    char  customer_ID[100][51];
    char Rank[11];
    int  CC[10];
    int price[15];
    int pos = 0; //紀錄一下Customer是誰
    int pos_h = 0;
    int His_E_S[100][1][100] = { 0 };//3D array His_X_X[pos_h][0][0] is times of history His_X_X[pos_h][0][His_X_X[pos_h][0][0]] is specific record
    int His_E_M[100][1][100] = { 0 };
    int His_E_O[100][1][100] = { 0 };//O:original  and   F:final
    int His_Rem[100][1][100] = { 0 };
    int His_Rem_E[100][1][100] = { 0 };//[行][列][高 每一次紀錄是啥] => [pos][0][0] 是有多少紀錄 || [pos][0][2] = 該用戶第二次兌換了的禮物是... 
    int His_Rem_O[100][1][100] = { 0 };
    int His_Rem_F[100][1][100] = { 0 };
    int His_Mo_T[100][1][100] = { 0 };
    int His_Mo_O[100][1][100] = { 0 };
    int His_Mo_F[100][1][100] = { 0 };
    char customerName[51] = ""; //global variable
    int a = 10;
    char large = '+';
};
int main()
{



    redemption sys;
    sys.setsize(150, 150);
    //Rectangle
    for (int row = 1; row <= 10; row++)
    {
        for (int col = 1; col <= 73; col++)
        {
            if (col > 1 && col < 73 && row == 1 || row == 10 && col>1 && col < 73) { cout << "-"; }
            else { cout << ""; }
            if (col == 1 && row == 1 || col == 73 && row == 10) { cout << "/"; }
            else { cout << ""; }

            if (col == 1 && row == 10 || row == 1 && col == 73) { cout << "\\"; }
            if (row == 5 && col == 48) {
                cout << "It is our privilege to invite you to engage in \n\tthe Gigt Redemption activity!!\n"
                    << "\tFor the sake of prompting consumption. \n" << "\tOur enterprise launched this redemption system.\n" << "\tEach of your purchase will take account to CCpoints, \n\twhich could be used to redeem delicated presents.\n"
                    << "\tThe detailed information is as fellow." << "\n\tNotice:You should initialize the starting data first.\n"; col += 4;
            }
            if (row > 1 && row <= 9 && col == 1) { cout << "|" << "\t"; }
            if (col == 73 && row > 1 && row <= 9) { cout << "                                                                |"; }

        }cout << endl;
    }//Rectangle

    cout << "*****************\n" << "Welcome Message designed by your group\n" << "***Main Menu***" << endl;

    cout << "[1]" << "Load Starting Data\n" << "[2]" << "Show Records\n" //show option 
        << "[3]" << "Edit Customers\n" << "[4]" << "Enter Customer View\n"
        << "[5]" << "Show Transaction History\n" << "[6]" << "Credits and Exit\n" << "*****************" << endl;
    cout << "Option(1-6): " << endl;//show total of options
    int c;//showMainMenu();
    cin >> c;
    while (true) {
        if (c == 1)break;
        else {
            cout << "Error! Please load the starting data first!";
            cin >> c;
        }
    }//check untill user cin 1 to load the data
    

    sys.load();
    system("pause");
    return 0;
}

// 閺夆晜鍔橀、鎴犵矙鐎ｎ亞纰? Ctrl + F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ偄鈷旈悶?濞戞挸绉烽惃鐔烘嫚?闁炽儲绻嗚ぐ宥夊础?
// 閻犲鍟抽惁顖滅矙鐎ｎ亞纰? F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ厾娈堕悹鍥ㄦ磵閳ь剚绻嗚ぐ宥夊础?

// 闁稿繈鍎靛Λ顒佹媴鐠恒劍鏆忛柟鍨涘亾鐎? 
//   1. 濞达綀娉曢弫銈囨喆閿濆懎鏋€闁哄倽顫夐、宥囨導閸曨剛鐖辩紒鐙呯磿閹﹪宕抽妸褏宕堕柛娆欑稻閸у﹪宕?缂佺媴绱曢幃濠囧棘閸ワ附顐?
//   2. 濞达綀娉曢弫銈夊炊閵忋倖袝閻犙冨缁喚绮婚敍鍕€為柛锝冨妿閻涖儵宕ｉ敐鍫㈢闁规亽鍎遍崺灞解攦閹邦亜鏁╅柣顔昏兌椤撴悂鎮?
//   3. 濞达綀娉曢弫銈嗘綇閹惧啿姣夌紒鎰殔瑜版盯寮婚妷褎绠欓柣銏㈠枑閸ㄦ碍娼忛幘鍐叉瘔闁告粌鑻崣鐐閺嶃劎啸闁?
//   4. 濞达綀娉曢弫銈夋煥濞嗘帩鍤栭柛鎺擃殙閵嗗啰绮ｅΔ鈧ぐ娑㈠蓟閵壯勭畽闂佹寧鐟ㄩ?
//   5. 閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻樿櫕鐓€濡炪倕鍘滈埀顒佺箑娴滄帡宕氬☉妯肩处闁哄倹澹嗗▓鎴炵閿濆洨鍨抽柡鍌氭矗濞嗐垽鏁嶇仦鎯х仐閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻橀潧绠涢柡鍫濐樀閵嗗秹鍨惧┑鍛鞍閻忓繐妫涢獮鍥嫉婢跺鏁╅柣顔荤劍閺嬪啯绂掗懜闈涙綉闁告梻濮撮崺灞俱亜閸︻厽绐?
//   6. 閻忓繐妫欏鐢告晬瀹€鍐仧閻熸洑绀侀崯鈧繛鍡忓墲婢э箑顕ｉ埀顒€顫㈤妶澶堚偓宥夋儎椤曞棛绀夐悹鍥╂焿濞村棝宕氶幍鏂ュ亾濠婂嫭鐎ù鐘茬亪閳?闁炽儲绮嶆晶锕€顕ｉ埀顒勫灳?闁炽儲绮撻妴宥夋儎椤斿厜鍋撳┑鍡氬珯闂侇偄顦扮€?.sln 闁哄倸娲ｅ▎?


// 閺夆晜鍔橀、鎴犵矙鐎ｎ亞纰? Ctrl + F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ偄鈷旈悶?濞戞挸绉烽惃鐔烘嫚?闁炽儲绻嗚ぐ宥夊础?
// 閻犲鍟抽惁顖滅矙鐎ｎ亞纰? F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ厾娈堕悹鍥ㄦ磵閳ь剚绻嗚ぐ宥夊础?

// 闁稿繈鍎靛Λ顒佹媴鐠恒劍鏆忛柟鍨涘亾鐎? 
//   1. 濞达綀娉曢弫銈囨喆閿濆懎鏋€闁哄倽顫夐、宥囨導閸曨剛鐖辩紒鐙呯磿閹﹪宕抽妸褏宕堕柛娆欑稻閸у﹪宕?缂佺媴绱曢幃濠囧棘閸ワ附顐?
//   2. 濞达綀娉曢弫銈夊炊閵忋倖袝閻犙冨缁喚绮婚敍鍕€為柛锝冨妿閻涖儵宕ｉ敐鍫㈢闁规亽鍎遍崺灞解攦閹邦亜鏁╅柣顔昏兌椤撴悂鎮?
//   3. 濞达綀娉曢弫銈嗘綇閹惧啿姣夌紒鎰殔瑜版盯寮婚妷褎绠欓柣銏㈠枑閸ㄦ碍娼忛幘鍐叉瘔闁告粌鑻崣鐐閺嶃劎啸闁?
//   4. 濞达綀娉曢弫銈夋煥濞嗘帩鍤栭柛鎺擃殙閵嗗啰绮ｅΔ鈧ぐ娑㈠蓟閵壯勭畽闂佹寧鐟ㄩ?
//   5. 閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻樿櫕鐓€濡炪倕鍘滈埀顒佺箑娴滄帡宕氬☉妯肩处闁哄倹澹嗗▓鎴炵閿濆洨鍨抽柡鍌氭矗濞嗐垽鏁嶇仦鎯х仐閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻橀潧绠涢柡鍫濐樀閵嗗秹鍨惧┑鍛鞍閻忓繐妫涢獮鍥嫉婢跺鏁╅柣顔荤劍閺嬪啯绂掗懜闈涙綉闁告梻濮撮崺灞俱亜閸︻厽绐?
//   6. 閻忓繐妫欏鐢告晬瀹€鍐仧閻熸洑绀侀崯鈧繛鍡忓墲婢э箑顕ｉ埀顒€顫㈤妶澶堚偓宥夋儎椤曞棛绀夐悹鍥╂焿濞村棝宕氶幍鏂ュ亾濠婂嫭鐎ù鐘茬亪閳?闁炽儲绮嶆晶锕€顕ｉ埀顒勫灳?闁炽儲绮撻妴宥夋儎椤斿厜鍋撳┑鍡氬珯闂侇偄顦扮€?.sln 闁哄倸娲ｅ▎?

// 閺夆晜鍔橀、鎴犵矙鐎ｎ亞纰? Ctrl + F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ偄鈷旈悶?濞戞挸绉烽惃鐔烘嫚?闁炽儲绻嗚ぐ宥夊础?
// 閻犲鍟抽惁顖滅矙鐎ｎ亞纰? F5 闁瑰瓨鐗為惃鐔烘嫚?>闁炽儲绮岀槐鎴炴叏鐎ｎ厾娈堕悹鍥ㄦ磵閳ь剚绻嗚ぐ宥夊础?

// 闁稿繈鍎靛Λ顒佹媴鐠恒劍鏆忛柟鍨涘亾鐎? 
//   1. 濞达綀娉曢弫銈囨喆閿濆懎鏋€闁哄倽顫夐、宥囨導閸曨剛鐖辩紒鐙呯磿閹﹪宕抽妸褏宕堕柛娆欑稻閸у﹪宕?缂佺媴绱曢幃濠囧棘閸ワ附顐?
//   2. 濞达綀娉曢弫銈夊炊閵忋倖袝閻犙冨缁喚绮婚敍鍕€為柛锝冨妿閻涖儵宕ｉ敐鍫㈢闁规亽鍎遍崺灞解攦閹邦亜鏁╅柣顔昏兌椤撴悂鎮?
//   3. 濞达綀娉曢弫銈嗘綇閹惧啿姣夌紒鎰殔瑜版盯寮婚妷褎绠欓柣銏㈠枑閸ㄦ碍娼忛幘鍐叉瘔闁告粌鑻崣鐐閺嶃劎啸闁?
//   4. 濞达綀娉曢弫銈夋煥濞嗘帩鍤栭柛鎺擃殙閵嗗啰绮ｅΔ鈧ぐ娑㈠蓟閵壯勭畽闂佹寧鐟ㄩ?
//   5. 閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻樿櫕鐓€濡炪倕鍘滈埀顒佺箑娴滄帡宕氬☉妯肩处闁哄倹澹嗗▓鎴炵閿濆洨鍨抽柡鍌氭矗濞嗐垽鏁嶇仦鎯х仐閺夌儐鍓欓崺宀勫灳濠婂牄鈧秹鎯勯鍏夊亾?闁炽儲绮嶉崸濠囧礉閻橀潧绠涢柡鍫濐樀閵嗗秹鍨惧┑鍛鞍閻忓繐妫涢獮鍥嫉婢跺鏁╅柣顔荤劍閺嬪啯绂掗懜闈涙綉闁告梻濮撮崺灞俱亜閸︻厽绐?
//   6. 閻忓繐妫欏鐢告晬瀹€鍐仧閻熸洑绀侀崯鈧繛鍡忓墲婢э箑顕ｉ埀顒€顫㈤妶澶堚偓宥夋儎椤曞棛绀夐悹鍥╂焿濞村棝宕氶幍鏂ュ亾濠婂嫭鐎ù鐘茬亪閳?闁炽儲绮嶆晶锕€顕ｉ埀顒勫灳?闁炽儲绮撻妴宥夋儎椤斿厜鍋撳┑鍡氬珯闂侇偄顦扮€?.sln 闁哄倸娲ｅ▎?

// 鏉╂劘顢戠粙瀣碍: Ctrl + F5 閹存牞鐨熺拠?>閳ユ粌绱戞慨瀣⒔鐞?娑撳秷鐨熺拠?閳ユ繆褰嶉崡?
// 鐠嬪啳鐦粙瀣碍: F5 閹存牞鐨熺拠?>閳ユ粌绱戞慨瀣殶鐠囨洍鈧繆褰嶉崡?

// 閸忋儵妫担璺ㄦ暏閹垛偓瀹? 
//   1. 娴ｈ法鏁ょ憴锝呭枀閺傝顢嶇挧鍕爱缁狅紕鎮婇崳銊х崶閸欙絾鍧婇崝?缁狅紕鎮婇弬鍥︽
//   2. 娴ｈ法鏁ら崶銏ゆЕ鐠у嫭绨粻锛勬倞閸ｃ劎鐛ラ崣锝堢箾閹恒儱鍩屽┃鎰敩閻胶顓搁悶?
//   3. 娴ｈ法鏁ゆ潏鎾冲毉缁愭褰涢弻銉ф箙閻㈢喐鍨氭潏鎾冲毉閸滃苯鍙炬禒鏍ㄧХ閹?
//   4. 娴ｈ法鏁ら柨娆掝嚖閸掓銆冪粣妤€褰涢弻銉ф箙闁挎瑨顕?
//   5. 鏉烆剙鍩岄垾婊堛€嶉惄顔光偓?閳ユ粍鍧婇崝鐘虫煀妞ゅ厜鈧繀浜掗崚娑樼紦閺傛壆娈戞禒锝囩垳閺傚洣娆㈤敍灞惧灗鏉烆剙鍩岄垾婊堛€嶉惄顔光偓?閳ユ粍鍧婇崝鐘靛箛閺堝銆嶉垾婵呬簰鐏忓棛骞囬張澶夊敩閻焦鏋冩禒鑸靛潑閸旂姴鍩屾い鍦窗
//   6. 鐏忓棙娼甸敍宀冨鐟曚礁鍟€濞?
// 鏉╂劘顢戠粙瀣碍: Ctrl + F5 閹存牞鐨熺拠?>閳ユ粌绱戞慨瀣⒔鐞?娑撳秷鐨熺拠?閳ユ繆褰嶉崡?
// 鐠嬪啳鐦粙瀣碍: F5 閹存牞鐨熺拠?>閳ユ粌绱戞慨瀣殶鐠囨洍鈧繆褰嶉崡?

// 閸忋儵妫担璺ㄦ暏閹垛偓瀹? 
//   1. 娴ｈ法鏁ょ憴锝呭枀閺傝顢嶇挧鍕爱缁狅紕鎮婇崳銊х崶閸欙絾鍧婇崝?缁狅紕鎮婇弬鍥︽
//   2. 娴ｈ法鏁ら崶銏ゆЕ鐠у嫭绨粻锛勬倞閸ｃ劎鐛ラ崣锝堢箾閹恒儱鍩屽┃鎰敩閻胶顓搁悶?
//   3. 娴ｈ法鏁ゆ潏鎾冲毉缁愭褰涢弻銉ф箙閻㈢喐鍨氭潏鎾冲毉閸滃苯鍙炬禒鏍ㄧХ閹?
//   4. 娴ｈ法鏁ら柨娆掝嚖閸掓銆冪粣妤€褰涢弻銉ф箙闁挎瑨顕?
//   5. 鏉烆剙鍩岄垾婊堛€嶉惄顔光偓?閳ユ粍鍧婇崝鐘虫煀妞ゅ厜鈧繀浜掗崚娑樼紦閺傛壆娈戞禒锝囩垳閺傚洣娆㈤敍灞惧灗鏉烆剙鍩岄垾婊堛€嶉惄顔光偓?閳ユ粍鍧婇崝鐘靛箛閺堝銆嶉垾婵呬簰鐏忓棛骞囬張澶夊敩閻焦鏋冩禒鑸靛潑閸旂姴鍩屾い鍦窗
//   6. 鐏忓棙娼甸敍宀冨鐟曚礁鍟€濞嗏剝澧﹀鈧銈夈€嶉惄顕嗙礉鐠囩柉娴嗛崚鎵斥偓婊勬瀮娴犲灈鈧?閳ユ粍澧﹀鈧垾?閳ユ粓銆嶉惄顔光偓婵嗚嫙闁瀚?.sln 閺傚洣娆?

