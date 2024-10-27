#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n\t\t---------------------------------Welcome to the number guessing game------------------\n"<<endl;
    cout<<"\n\t\t---->>You will have to guess a number between 1 to 100.";
    cout<<"\n\t\t----->>let start playing and best of luck."<<endl;
    srand(time(0));
    int randNumber=(rand()%100)+1;
    cout<<"\n^^** you will have total 5 chances to guess the correct number.**^^\n";
    int chanceleft=5;
    int playerInput;

    for(int i=1;i<=5;i++){
        cout<<"\n---->Enter the number:";
        cin>>playerInput;

        if(playerInput == randNumber){
            cout<<"\nCongrats !!. you have sucessfully guessed the right number\n";
            cout<<"\nThanks for playing. have a nice day";
            break;
        }
        else{
            if(playerInput > randNumber){
                cout<<"\n""Insert a smaller Number. Try again"""<<endl;

            }
            else{
                cout<<"\n""[Insert a larger number . Try again]"""<<endl;
            }
        }
        chanceleft--;
        cout<<"\n( chances left to guess the random number :"<< chanceleft << ")"<<endl;
        
        if (chanceleft ==0)
        {
            cout<<"\n sorry your chances has been finished  to guess the random number\n"<<endl;
            cout<<" the random number was: "<<randNumber <<endl;
            cout<<" thanks for playing have a nice day. ";
        }
    }
    cout<<"\n";
    return 0;
}