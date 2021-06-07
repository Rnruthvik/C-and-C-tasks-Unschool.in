#include<iostream>
#include<string>
#include <cstdlib>
#include<ctime>

using namespace std;

void play()
{
    string name;
    int total;
    int bet=0;
    int dice=0;
    int guess=0;
    char choice;

    srand(time(0));

    cout<<"_____________________________________"<<endl<<endl;
    cout<<"            CASINO GAME              "<<endl<<endl;
    cout<<"_____________________________________"<<endl<<endl;

    cout<<"Enter Your Name : ";
    getline(cin,name);

    cout<<endl<<"Enter Deposit to start game : Rs.";
    cin>>total;

    do {
        system("cls");

        cout<<"____________________________________________________________________________"<<endl<<endl;
        cout<<"                          RULES OF THE GAME                                 "<<endl;
        cout<<"____________________________________________________________________________"<<endl<<endl;
        cout<<"1. Choose any number between 1 to 10"<<endl;
        cout<<"2. If you win you will get 10 times of money you bet"<<endl;
        cout<<"3. If you bet on wrong number you will lose your betting total"<<endl;
        cout<<"____________________________________________________________________________"<<endl;

        cout<<"\nCurrent balance is Rs. "<<total<<endl;

        do {
            cout<<name<<", Please Enter amount to bet : Rs.";
            cin>>bet;
            if (bet>total)
                cout<<"Betting Amount is more than Current Balance"<<endl<<"Re-enter betting amount"<<endl;

        } while(bet>total);

        do {
            cout<<"Enter number on which you want to bet between 1 to 6 :";
            cin>>guess;
            if (guess<1 || guess>6)
                cout<<"Number should be between 1 to 6"<<endl<<"Re-enter betting amount"<<endl;

        } while(guess<1 || guess>6);

        dice=rand()%6 + 1;

        if (dice!=guess)
        {

            total=total-bet;
            cout<<endl<<endl<<"!!! You lost Rs. "<<bet<<" !!!"<<endl;

        }
        else
        {

            total=total+(bet*10);
            cout<<endl<<endl<<"!!! Congratulations !!!\n\n !! You won Rs. "<<(bet*10)<<" !!";

        }
        cout<<endl<<endl<<"The winning number was : "<<dice<<endl;
        cout<<endl<<name<<", You have Rs. "<<total<<endl;

        if (total==0)
        {
            cout<<"You have no money to play ";

        }

        cout<<endl<<endl<<"Do you want to play again(y/n)? ";
        cin>>choice;

        if(choice=='n' || choice=='N')
            exit(0);

    } while(choice=='y' || choice=='Y');

    cout<<"Thanks for playing. Your Current Balance is Rs. "<<total<<endl;

}

int main()
{

    do
    {
        system("cls");
        play();
    }while(1);

    return 0;
}
