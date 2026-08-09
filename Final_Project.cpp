#include <iostream>
using namespace std;

struct employee 
{
    int id;
    string name;
    string job ; 
    int hours ;
    float cost_of_hour ;
};

void Print (employee arr[] , int size)
{
    for (int i = 0 ; i < size ; i++)
{
    cout << "The name of employee number "<< i+1 << " is " << arr[i].name << " his job is " << arr[i].job << " His monthly salary is " << arr[i].hours*arr[i].cost_of_hour << " and his ID: "<< arr[i].id << endl;
    cout << "************************** " << endl; 
}

}

void Salary (employee arr[] , int size)
{
  
    cout << "--- Salaries Report ---" << endl;
    for (int i = 0 ; i < size ; i++)
    {
        float salary = arr[i].hours * arr[i].cost_of_hour; 
        
        cout << arr[i].job << " " << arr[i].name << " | Monthly salary is : " << salary << endl; 
    }
    cout << "*************************" << endl;
    

};
void get_data (employee arr[] , int size)
{
for (int i = 0 ; i < size ; i++)
{
    cout << "Enter the name , job , ID , hours he work in this month and cost of hour for employee number " << i + 1 << endl;
    cin >> arr[i].name >> arr[i].job >> arr[i].id >> arr[i].hours >> arr[i].cost_of_hour ;
}
    cout << "*************************" << endl;
};

void search (employee arr[] , int size)
{
    int ID ; 
    cout << "Enter the ID of the employee you want " << endl;
    cin >> ID;
    employee find;
    for (int i = 0; i < size; i++)
    {
            find.id = arr[i].id;

        if (find.id == ID)
        {
            cout << "The Employee is " << arr[i].name << " his job is " << arr[i].job << " and his salary is " << arr[i].hours * arr[i].cost_of_hour<< endl;
            break;
        }
    }    
};

int main()
{
employee Emp[5];
int choice; 
bool IsDataEntered = false ;
    do {
        cout << "\n--- HR System Menu --- " << endl;
    cout << "1. Enter Employees Data " << endl ;
    cout << "2. Search for Employee by ID " << endl;
    cout << "3. Calculate Salaries " << endl;
    cout << "4. Print the data " << endl;
    cout << "5. Exit " << endl ;
    cout << "Enter your choice: ";
    cin >> choice;

switch (choice)
{
    case 1:
get_data (Emp , 5);
IsDataEntered = true ;
break;   
    case 2:
    if (IsDataEntered == true)
search (Emp , 5);
    else
    cout << "Error: Please enter employees data first! (Choose 1) " << endl;
break;
    case 3:
    if (IsDataEntered == true)
Salary (Emp, 5);
    else 
    cout << "Error: Please enter employees data first! (Choose 1) " << endl;
break;
    case 4:
    if (IsDataEntered == true)
Print (Emp , 5);
    else
    cout << "Error: Please enter employees data first! (Choose 1) " << endl;
break;
    case 5:
cout << "Exiting program..." << endl;
break;
    default :
cout << "Invalid choice , Please try again" << endl;
break;
} 
} while (choice != 5);

    return 0;
}