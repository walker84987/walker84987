#include <iostream>
using namespace std;

void red() {
    cout << "\033[31m";
}

void cyan() {
    cout << "\033[36m";
}

void yellow() {
  cout << "\033[33m" ;
}

void white() {
  cout << "\033[0m" ;
}

void lime() {
 cout << "\033[32m";
}

void ress () {
    float res1,res2;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    float sum = 1/(1/res1 + 1/res2) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void resss () {
    float res1,res2,res3;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    float sum = 1/(1/res1 + 1/res2 + 1/res3) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void ressss () {
    float res1,res2,res3,res4;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void resssss () {
    float res1,res2,res3,res4,res5;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void ressssss () {
    float res1,res2,res3,res4,res5,res6;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    cout << "res6= " ;cin >> res6;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5 + 1/res6) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void resssssss () {
    float res1,res2,res3,res4,res5,res6,res7;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    cout << "res6= " ;cin >> res6;
    cout << "res7= " ;cin >> res7;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5 + 1/res6 + 1/res7) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void ressssssss () {
    float res1,res2,res3,res4,res5,res6,res7,res8;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    cout << "res6= " ;cin >> res6;
    cout << "res7= " ;cin >> res7;
    cout << "res8= " ;cin >> res8;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5 + 1/res6 + 1/res7 + 1/res8) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void resssssssss () {
    float res1,res2,res3,res4,res5,res6,res7,res8,res9;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    cout << "res6= " ;cin >> res6;
    cout << "res7= " ;cin >> res7;
    cout << "res8= " ;cin >> res8;
    cout << "res9= " ;cin >> res9;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5 + 1/res6 + 1/res7 + 1/res8 + 1/res9) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}

void ressssssssss () {
    float res1,res2,res3,res4,res5,res6,res7,res8,res9,res10;
    yellow();
    cout << "res1= " ;cin >> res1;
    cout << "res2= " ;cin >> res2;
    cout << "res3= " ;cin >> res3;
    cout << "res4= " ;cin >> res4;
    cout << "res5= " ;cin >> res5;
    cout << "res6= " ;cin >> res6;
    cout << "res7= " ;cin >> res7;
    cout << "res8= " ;cin >> res8;
    cout << "res9= " ;cin >> res9;
    cout << "res10= " ;cin >> res10;
    float sum = 1/(1/res1 + 1/res2 + 1/res3 +1/res4 + 1/res5 + 1/res6 + 1/res7 + 1/res8 + 1/res9 + 1/res10) ;
    cout << "\033[32m" << "result: " << sum << endl << "round: " << round(sum);
    white();
}


int main () {
    int amount;
    cyan();
    cout << "hello!\nthis is the calculator of the resistors in -parelar- by #84987!\nup to 10 resistors\n";
    cout << "resistances amount= ";
    cin >> amount;
    if (amount > 10) {
        red();
        cout <<  "please put a number between 2 and 10";
        white();
    }
    if (amount == 2) {
        ress();
    };
    if (amount == 3) {
        resss();
    };
    if (amount == 4) {
        ressss();
    };
    if (amount == 5) {
        resssss();
    };
    if (amount == 6) {
        ressssss();
    };
    if (amount == 7) {
        resssssss();
    };
    if (amount == 8) {
        ressssssss();
    };
    if (amount == 9) {
        resssssssss();
    };
    if (amount == 10) {
        ressssssssss();
    };
    white();
    return 0;
}