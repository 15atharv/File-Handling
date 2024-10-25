#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
void addstudent(){
    ofstream outFile("student.txt",ios::app);
    
    string name;
    int rollnumber;
    float grade;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter the rollnumber: ";
    cin>>rollnumber;
    cout<<"Enter the the grade: ";
    cin>>grade;
    outFile<<name<<" "<<rollnumber<<" "<<grade<<endl;
    outFile.close();
    cout<<"student record added "<<endl;

}
void displaystudents(){
    ifstream inFile("student.txt");
    string name;
    int rollnumber;
    float grade;
    cout<<"Students records:"<<endl;
    while(inFile>>name>>rollnumber>>grade){
        cout<<"Name: "<<name<<",rollnumber: "<<rollnumber<<",grade: "<<grade<<endl;
        }inFile.close();
}
void serchstudent(){
    ifstream inFile ("student.txt");
    string name, searchName;
    int rollnumber;
    float grade;
    bool found = false;
    
    cout << "Enter the student  name to serch:";
    cin >> searchName;
    while(inFile>>name>>rollnumber>>grade){
        if(name==searchName){
            cout<<"student found! name: "<<name<<",grade: "<<grade<<endl;
            found=true;
            break;
        }
    }
if(!found){
    cout<<"student not found. "<<endl;
}
inFile.close();
}
int main(){
    int choice;
    do
    {
        cout<<"1.Add student "<<endl;
        cout<<"2.Display all students "<<endl;
        cout<<"3.Search for student "<<endl;
        cout<<"4.Exit "<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice == 1){
           addstudent();
       } else if (choice == 2){
           displaystudents();
       } else if (choice == 3){
           serchstudent ();
       }
    } while (choice !=4 );
    cout << "Program exited." << endl;
    return 0;
}
        