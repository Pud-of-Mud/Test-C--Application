#include <iostream>

int main() {

  //Sets up the Varables. 
  std::string username = "Admin";
  int password = 1;    //TODO: Set an encryption for password
  bool login = false;  //checks if the user is logged in
  int input;           //Input varable

  //Asks for password, than waits for input
  std::cout << "Input Password: \n";
  std::cin >> input;

  //Checks if password is right
  //TODO: Make 3 attempts at password guessing
  //before ending program
  while (input != password) {
    if(input == password) {
      //Sets login to 'true' when correct
      std::cout << "Logging in...";
      login = true; 
    }else {
      //Repeats cycle of login untill correct
      std::cout << "Login Failed!";
    } 
  }

  std::cout << "Welcome, " << username << "\n";

  

  return 0;
}