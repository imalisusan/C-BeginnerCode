#include<iostream>
#include<string>

using namespace std;

struct Player{
int player_id;
string player_name;
string player_position;
int age;
};

void input(Player *playerone)
{
    cout<<"Please enter the palyer id: "<<endl;
    cin>>playerone->player_id;
}
void output(Player*playertwo)
{
cout<<"The player id is: "<<playertwo->player_id<<endl;
}
int main()
{
    Player play;
    Player *ptr;
    ptr = &play;
    input(ptr);
    output(ptr);
    return 0;   
}
