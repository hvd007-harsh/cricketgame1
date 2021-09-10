#include<iostream>
#include<stdlib.h>
#include<string>
#include<ctime>
#include<cstdlib>
#include<unistd.h>
#include<windows.h>
#include<cmath>
using namespace std;
class Team {
    public:
        string name;
        string player1,player2,player3;
        //string player[3];
        int Score ;
};

void welcome(){
cout<<"\t\t\t  HI WELCOME TO OUR NEW CRICKET GAME \t\t\t"<<endl;
Sleep(1000);
cout<<"\t\t\t ....................................\t\t\t"<<endl;
Sleep(1000);
cout<<"\t\t\t    ***********CRICKET GAME***********\t\t\t"<<endl;
cout<<"                                "<<"\n\n\n\n\n"<<endl;
Sleep(1000);

}
void display(string team , string player[]){
    cout<<"\t   TEAM : "<<team<<"\n";

 //  cout<<" player1 :"<< player1<<"\n"<<" player2 :"<< player2 <<"\n"<<" player3 :"<< player3 <<"\n";

    for(int i =0;i<=2;i++){
        cout<<"\t"<<player[i]<<endl;
    }
    Sleep(1000);

}
int Inning(int score,string TeamName,string player[]){
//INITiALIZING
int sum =0;
for (int i=0;i<=2;i++){
        cout<<"Player :"<<player[i] <<endl;
        for(int j=1;j<=6;j++){
            cout<<"\t Over:"<<i<<"    "<<"Bowl:"<<j;
            Sleep(400);
            score = rand()%6+1;
            cout<<"\t\t Run : "<<score<<endl;
            sum = sum + score;
        }
}
cout<< "\t\t\t\t  THE SCORE BY TEAM :"<<TeamName<<":"<<sum<<endl;
return sum;

}
void winner(int A,int B,string Aname,string Bname){
if(A>B){
    cout << "\t\t THE WINNER OF MATCH IS : TEAM A "<<Aname<<endl;
   }
    else if (B>A){
     cout << "\t\t THE WINNER OF MATCH IS : TEAM B "<<Bname<<endl;
    }
    else{
    cout<< "\t\t THE MATCH GET DRAW " <<endl;
    }

}
int main(){
    char Button;
 welcome();
// INITIALIZE TEAM START
Team A;
Team B;
A.name ="BLUE";
A.player1="HARSH";
A.player2="SACHIN";
A.player3="HIMANSHU";
A.Score=0;
B.name="BLACK";
B.player1="SHUBHAM";
B.player2="MARIELA";
B.player3="RAMI";
B.Score=0;
string a[3]={A.player1,A.player2,A.player3};
string b[3]={B.player1,B.player2,B.player3};
//INITIALIZE TEAM END
display(A.name,a);
display(B.name,b);
cout<<"Enter the key \'Y\' or \'y\' to initialize second Inning "<<endl;
cin>>Button;
do{
cout << "\t\t\t Initializing First Innings >>> \t\t\t"<<endl;
A.Score = Inning(A.Score,A.name,a);
break;
}while(Button == 'y'||'Y');
cout<<"Enter the key \'Y\' or \'y\' to initialize second Inning "<<endl;
cin>>Button;
do{
cout << "\t\t\t Initializing Second Innings >>> \t\t\t"<<endl;
B.Score = Inning(B.Score,B.name,b);
break;
}while(Button == 'y'||'Y');
winner(A.Score,B.Score,A.name,B.name);
return 0;
}

