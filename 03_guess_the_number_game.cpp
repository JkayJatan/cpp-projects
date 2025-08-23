#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int target,user_num=0,attempts=1;
    cout<<"Welcome to Guess the Number Game!\n";
    cout<<"I have chosen a number between 1 and 100.\nCan you guess it?\n";
    srand(time(0));
    target=rand()%100+1;
    while (target!=user_num){
        cout<<"Enter your Guess:";
        cin>>user_num;
        if (target>user_num){
            cout<<"Too Low!\n";
            attempts++;
        }else if(target<user_num){
            cout<<"Too nb High!\n";
            attempts++;
        }
    }
    cout<<"🎉Congratulations! You guessed the number in "<<attempts<<" attempts!";    
    return 0;
}