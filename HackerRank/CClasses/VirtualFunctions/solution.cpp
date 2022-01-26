// https://www.hackerrank.com/challenges/virtual-functions/problem
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor: public Person{
public:
    Professor(){
        cur_id = ++id;
    }
    int publications;
    int cur_id;
    static int id;
    void getdata(){
        cin >> name >> age >> publications;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student: public Person{
public:
    Student(){
        cur_id = ++id;
    }
    int marks[6];
    int cur_id;
    static int id;
    void getdata(){
        cin >> name >> age;
        for(int i=0; i<6; i++) cin >> marks[i];
    }
    void putdata(){
        int sum=0;
        for(int i=0; i<6; i++) sum += marks[i];
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};
int Student::id = 0;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
