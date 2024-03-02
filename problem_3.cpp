#include <iostream>
#include "vector"

using namespace std;

class Student{
private:
    string name;
    long int id;
    string groupName;
public:
    Student(){}
    Student(string name, long int id, string groupName){
        this->name=name;
        this->id=id;
        this->groupName=groupName;
    }
    string getGroupName(){
        return this->groupName;
    }
};

int main(){
    vector<Student> v;
    int n;
    cin>>n;
    for (int i=0;i<5;i++){
        string Name, Group;
        long int Id;
        cin>>Name>>Id>>Group;
        Student s(Name, Id, Group);
        v.push_back(s);
    }
    for (int i=0; i<v.size(); i++){
        Student item=v[i];
        int current=i-1;
    }

}