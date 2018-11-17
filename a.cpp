#include<iostream>
#include<cstring>
using namespace std;


class human{
    // Access modifiers
    private:
        string wifipassword;
        // data representation
        // Not only primitive
        int age;
        int eye1;
        int eye2;
        string name;
    //protected: 
    // Allowed for inheritance
    public:
    // User defined Constructor
    human(){
        age = 5;
        eye1 = 1;
        eye2 = 1;
        name = " Subhankar";
    }
    human(int age2){
        age = age2;
       name = "some Kar"; 
       // Now eye1 and eye2 will have randm values.
    }
    // Destructor

    // Getter and Setter methods
    int geteye1(){
        return eye1;
    }
    void seteye1(int valueEye){
        eye1 = valueEye;
    }
    // functions
    void display(){
        cout << "Name - "<< name <<endl ;
        cout << "Age - " << age << endl ;
        cout << "Eyes - "<< eye1 << " " << eye2  << endl; 
        cout << "**********" << endl;
    }

};

int main(){
    int x; // x is an int variable
    human h1(10); //h1 is a human object
    human h2;
    //h1.eye1 = 5;
    //h1.eye2 = 6;
    
    //cout << h1.eye1;
    cout << h1.geteye1() << endl;
    h1.seteye1(5);
    h1.display();
    h2.display();
    // Error : No access to 
    return 0;
}
