
//6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."


#include <iostream>
using namespace std; 

#include <string>

int main() {
    string username, password;

     cout << "Enter username: ";
     cin >> username;
    
    cout << "Enter password: ";
    cin >> password;

  
    if (username == "admin" && password == "1234") {
        cout << "Login successful" <<endl;
    } else {
        cout << "Login failed" <<endl;
    }

    return 0;
}