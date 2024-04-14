#include <iostream>
#include <string>
using namespace std;
// Define the student record structure
struct Student {
    string name;
    int age;
    float marks;
};
//Function to add a new student record
void addStudent(Student students[], int& count) {
    string name;
    int age;
    float marks;
    // Prompt the user to enter the student's information
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student marks: ";
    cin >> marks;
    // Create a new student record using the entered information
    Student student = { name, age, marks };
    // Add the new student record to the students array
    students[count++] = student;
    // Display a message to indicate that the record was added successfully
    cout << "Student added successfully." << endl;
}
// Function to search for a student by name
void searchStudentByName(Student students[], int count) {
    string name;
    // Prompt the user to enter the name of the student to search for
    cout << "Enter student name: ";
    cin >> name;

    bool found = false;

    // Search for the student by name in the students array
    for (int i = 0; i < count; i++) {
        if (students[i].name == name) {
            // Display the student's information if they are found
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Marks: " << students[i].marks << endl;
            found = true;
            break;
        }
    }
    // Display a message if the student is not found
    if (!found) {
        cout << "Student not found." << endl;
    }
}
// Function to print all student records
void printAllStudents(Student students[], int count) {
    // Loop through the students array and display each record
    system("color F1");
    for (int i = 0; i < count; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }
}

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int count = 0;

    while (true) {
        // Prompt the user to select an option
        cout << "Enter option (1 to add, 2 to search, 3 to print all, 4 to exit): ";
        int option;
        cin >> option;

        switch (option) {
            case 1:
                // Call the addStudent function to add a new student record
                addStudent(students, count);
                break;
            case 2:
                // Call the searchStudentByName function to search for a student by name
                searchStudentByName(students, count);
                break;
            case 3:
                // Call the printAllStudents function to print all student records
                printAllStudents(students, count);
                break;
            case 4:
                // Exit the program
                cout<<"MADE BY 22CS003 - Pratham aghera "<<endl <<"\t22CS039 - Krish mavani"<<endl <<"\t22CS092 - Sujal vekariya"<<endl;
                return 0;
            default:
                // Display an error message if an invalid option is selected
                cout << "Invalid option." << endl;
        }
    }


    return 0;
}
