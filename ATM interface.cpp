#include <iostream>
using namespace std;
int main() {
    int a, b=1234, c = 5000, d, e, f, i, z = 1, x,y,p=0;
    long long int g = 7894561230, h;
    cout << "***************************************************************************\n";
    cout << "*************************";
    cout << "-welcome to windows bank-";
    cout << "*************************\n";
    cout << "***************************************************************************\n\n";
    cout << "please insert your card\n";
    cout << "please enter your pin:";
    cin >> y;

    for (i = 1; i <= 100; i++) {
        if (y == b) {
            cout << "please select any one option whatever you want:\n(1)press '1' for check balance.\n(2)press '2' for cash deposit.\n(3)press '3' for cash withdrawal.\n(4)press '4' for change your pin.\n(5)press '5' to check your mobile no.\n(6)press '6' for change mobile no.\n(7)press '7' for exit the transaction.\n";
            cin >> a;
            cout << "You had selected option: " << a << "\n";
            switch (a) {
                case 1:
                    cout << "your Phone number is:" << g << "\n";
                    cout << "your current balance is: " << c << "\n\n";
                    break;
                case 2:
                    cout << "please enter the amount you want to deposit:";
                    cin >> d;
                    c = c + d;
                    cout << "your current balance is: " << c << "\n\n";
                    break;
                case 3:
                    cout << "please enter the amount you want to withdraw:";
                    cin >> e;
                    if (e <= c) {
                        c = c - e;
                        cout << "your current balance is: " << c << "\n\n";
                    } else {
                        cout << "your request for rupees "<<e<<" is not accepted, because your current remaining balance is "<< c << ".\n\n";
                    }
                    break;
                case 4:
                    cout << "please enter your current pin:";
                    cin >> x;
                    if (x == b) {
                        cout << "please enter your new pin:";
                        cin >> f;
                        if (f == x) {
                            cout << "your pin is same as the older one\n\n";
                        } else {
                            b = f;
                            p++;
                            cout << "your new pin is:" << f << "\n\n";
                        }
                    } else {
                        cout << "Your entered wrong Pin number.\n\n";
                    }
                    break;
                case 5:
                    cout << "your current mobile no is:" << g << "\n\n";
                    break;
                case 6:
                    cout << "please enter your new mobile no:";
                    cin >> h;

                    if (g == h) {
                        cout << "this number is already registered.\n\n";
                    } else {
                        g = h;
                        cout << "your new mobile no is:" << h << "\n\n";
                    }
                    break;
                case 7:
                    cout << "thanks for visiting the WINDOWS ATM you are our valuable customer.\n";
                    i = 100;
                    break;
            }
        } else {
            if(p>0){
            cout<<"Please re-enter your Pin for verification: ";
            cin>>y;
            cout<<"\n";
            }else{
            cout << "\nyour pin is wrong, please enter the correct pin: ";
            cin >> y;  
            cout<<"\n";
            }
        }
    }
}
