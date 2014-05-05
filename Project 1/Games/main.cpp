/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on April 16, 2014, 3:24 PM
 * CSC-17A - Project 1
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User defined libraries
#include "AryStruc.h"

//No Global Constants

//Structures
//Game 2
struct checkga{
    int *box;
};
//Function Prototypes
//Game 1
void game1(int &);
void fillAry(Array *,int);
void prntAry(Array *);
void dstry(Array *);
void effecta();
void effectb(Array *);
void random(Array *);
void result(Array *,int &);
//Game 2
void game2(int &);
void display(Array2 *);
void turns(checkga &,Array2 *,int &);
void win(Array2 *,int &);
void tie(Array2 *,int &);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int input,start=0;
    //Continue the loop until player exits
    do{
        //Menu
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Pick a game from list below."<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"1. Find the ball from 5 cups"<<endl;
        cout<<"2. Tic Tac Toe"<<endl;
        cout<<"Press any other key to end program."<<endl;
        cout<<endl;
        cin>>input;
        if(input==1)game1(start);
        if(input==2)game2(start);
        if(input<=0||input>2)start=1;
    }while(start==0);
    return 0;
}

void tie(Array2 *a,int &game){
    int count =0;
    for(int i=0;i<9;i++){
        if(a[i].store==88||a[i].store==79){
            count++;
        }
    }
    if(count==9)game=1;
    cout<<"Tied"<<endl;
}

void win(Array2 *a,int &game){
    //Person
    //Straight Line Horizontal
    if(a[0].store==88&&a[1].store==88&&a[2].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    if(a[3].store==88&&a[4].store==88&&a[5].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    if(a[6].store==88&&a[7].store==88&&a[8].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    //Straight Line Vertical
    if(a[0].store==88&&a[3].store==88&&a[6].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    if(a[1].store==88&&a[4].store==88&&a[7].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    if(a[2].store==88&&a[5].store==88&&a[8].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    //Cross
    if(a[0].store==88&&a[4].store==88&&a[8].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    if(a[2].store==88&&a[4].store==88&&a[6].store==88){
        cout<<"You Win"<<endl;
        game=1;
    }
    //Computer
    //Straight Line Horizontal
    if(a[0].store==79&&a[1].store==79&&a[2].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    if(a[3].store==79&&a[4].store==79&&a[5].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    if(a[6].store==79&&a[7].store==79&&a[8].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    //Straight Line Vertical
    if(a[0].store==79&&a[3].store==79&&a[6].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    if(a[1].store==79&&a[4].store==79&&a[7].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    if(a[2].store==79&&a[5].store==79&&a[8].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    //Cross
    if(a[0].store==79&&a[4].store==79&&a[8].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
    if(a[2].store==79&&a[4].store==79&&a[6].store==79){
        cout<<"You Lose"<<endl;
        game=1;
    }
}

void display(Array2 *a){
    cout<<"~~~~~~~~~~~~"<<endl;
    cout<<"["<<a[0].store<<" ]["<<a[1].store<<" ]["<<a[2].store<<" ]"<<endl;
    cout<<"["<<a[3].store<<" ]["<<a[4].store<<" ]["<<a[5].store<<" ]"<<endl;
    cout<<"["<<a[6].store<<" ]["<<a[7].store<<" ]["<<a[8].store<<" ]"<<endl;
    cout<<"~~~~~~~~~~~~"<<endl;
}

void turns(checkga &chec,Array2 *b,int &game){
    //Declare variables
    int input2,a1,a2;
    if(game==0){
        //Computer
        cout<<"Computer's Turn"<<endl;
        a1=rand()%9+1;
        if(chec.box[a1-1]==0){
            b[a1-1].store=79;
            chec.box[a1-1]=1;
        }
        else if(chec.box[a1-1]==1){
            do{
                a2=rand()%9+1;
            }while(chec.box[a2-1]==1);
            b[a2-1].store=79;
            chec.box[a2-1]=1;
        }
        win(b,game);
        tie(b,game);
    }
    display(b);
    if(game==0){
        //Person
        cout<<"Person's Turn"<<endl;
        cout<<"Enter Choice 1~9"<<endl;
        cin>>input2;
        if(chec.box[input2-1]==0){
            b[input2-1].store=88;
            chec.box[input2-1]=1;
        }
        else if(chec.box[input2-1]==1){
            do{
                cout<<" Re-Enter Choice 1~9"<<endl;
                cin>>input2;
            }while(chec.box[input2-1]==1);
            b[input2-1].store=88;
            chec.box[input2-1]=1;
        }
        win(b,game);
        tie(b,game);
    }
}

void game2(int &start){
    //Set timer seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    const int SIZE=9;
    int input,game=0;
    //Check if box is filled
    checkga check;
    check.box=new int [SIZE];
    //Array of structures to use to fill X or O
    Array2 *point=new Array2[SIZE];
    for(int i=0;i<SIZE;i++){
        check.box[i]=0;
    }
    for(int i=0;i<SIZE;i++){
        point[i].store=0;
    }
    cout<<"~~~~~~~~~~~~"<<endl;
    cout<<"Tic Tac Toe"<<endl;
    cout<<"~~~~~~~~~~~~"<<endl;
    cout<<"1. Start Game."<<endl;
    cout<<"2. Exit."<<endl;
    cin>>input;
    if(input==1){
        cout<<"Computer goes first"<<endl;
        do{
            turns(check,point,game);
        }while(game==0);
    };
    //Un-allocated
    delete []point;
    delete []check.box;
    
}

void result(Array *a,int &count){
    //Declare variable
    int choose;
    cout<<"Which cup has the ball?"<<endl;
    cout<<"Input the number between 1 to 5"<<endl;
    cout<<"1. First Cup"<<endl;
    cout<<"2. Second Cup"<<endl;
    cout<<"3. Third Cup"<<endl;
    cout<<"4. Forth Cup"<<endl;
    cout<<"5. Fifth Cup"<<endl;
    cin>>choose;
    
    cout<<"Your choice was "<<choose<<endl;
    if(choose==1){
        if(a->cup[0]==1){
            cout<<"You were right!"<<endl;
            count++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
    }
    if(choose==2){
        if(a->cup[1]==1){
            cout<<"You were right!"<<endl;
            count++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
    }
    if(choose==3){
        if(a->cup[2]==1){
            cout<<"You were right!"<<endl;
            count++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
    }
    if(choose==4){
        if(a->cup[3]==1){
            cout<<"You were right!"<<endl;
            count++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
    }
    if(choose==5){
        if(a->cup[4]==1){
            cout<<"You were right!"<<endl;
            count++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
    }
}

void random(Array *a){
    //Set timer seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    int random;
    random=rand()%5+1;
    if(random==1)a->cup[0]=1;
    if(random==2)a->cup[1]=1;
    if(random==3)a->cup[2]=1;
    if(random==4)a->cup[3]=1;
    if(random==5)a->cup[4]=1;
}

void effectb(Array *a){
    if(a->cup[0]==1){
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"|| BALL |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
    }
    if(a->cup[1]==1){
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"||  ?   |"<<" || BALL |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
    }
    if(a->cup[2]==1){
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"||  ?   |"<<" ||  ?   |"<<" || BALL |"<<" ||  ?   |"<<" ||  ?   |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
    }
    if(a->cup[3]==1){
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" || BALL |"<<" ||  ?   |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
    }
    if(a->cup[4]==1){
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" || BALL |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
    }
}

void effecta(){
    //Cup with effects
    cout<<"  .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<"    .-~~-."<<endl;
    cout<<",|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<" ,|`-__-'|"<<endl;
    cout<<"||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<" ||  ?   |"<<endl;;
    cout<<"`|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<" `|      |"<<endl;
    cout<<"  `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<"    `-__-'"<<endl;
}

void dstry(Array *a){
    delete []a->cup;
}

void prntAry(Array *a){
    //Print the cup and its contents
    for(int i=0;i<a->size;i++){
        cout<<a->cup[i]<<" ";
    }
    cout<<endl;
}

void fillAry(Array *a,int n){
    //Declare size in array structure
    a->size=n;
    //Allocate memory
    a->cup=new int [a->size];
    //Fill the array with 0's
    for(int i=0;i<a->size;i++){
        a->cup[i]=0;
    }
}

void game1(int &start){
    //Declare variables
    int size=5,game1=0,input1,input2,count=0;
    //Display Game 1 Menu
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Try to find which cup holds the ball"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"1. Start Game."<<endl;
    cout<<"2. Exit."<<endl;
    cin>>input1;
    if(input1==1){
        do{
            Array cup;
            //Fill the cup
            fillAry(&cup,size);
            //Display the cups
            effecta();
            //Put a ball in one of the cups
            random(&cup);
            //prntAry(&cup);//To check
            result(&cup,count);
            effectb(&cup);
            //De-allocate
            dstry(&cup);
            //Give options to keep playing
            cout<<"~Current Record~"<<endl;
            cout<<"You currently have "<<count<<" wins."<<endl;
            cout<<endl;
            cout<<"Do you want to try again?"<<endl;
            cout<<"1. Yes."<<endl;
            cout<<"2. Exit."<<endl;
            cin>>input2;
            if(input2==1)game1=0;
            if(input2==2)game1=1;
        }while(game1==0);
    };
}
