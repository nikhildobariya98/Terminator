#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the A and B: "; 
    cin >> a >> b;

    try{
        if(b==0)
            throw b;
        cout << "A divide by B: " << a/b << endl << endl;
    }
    catch(int a){
        cout << "B can not be 0, Re-enter the value of B: ";
        cin >> b;
        cout << "A divide by B: " << a/b << endl << endl;
    }

    int age;
    cout << "Enter the age of candidate: ";
    cin >> age;

    try{
        if(age < 18)
            throw age;
        cout << "Candidate can vote in election!!" << endl;
    }
    catch(int a){
        cout << "Age is less than 18, Candidate not allow to vote!!" << endl << endl;
    }

    string password;
    cout << "Enter the password: ";
    cin >> password;

    try{
        for(int i = 0; i < password.length(); i++){
            if(password[i] >= 'A' && password[i] <= 'Z'){
                throw password;
            }
        }
        cout << "Valid password!!";
    }
    catch(string str){
        cout << "password is not valid" << endl;
    }
    
}
