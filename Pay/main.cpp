#include <iostream>
#include <string>
using namespace std;

struct employee
{
    int id;
    string name;
    string address;
    int hoursworked;
    int overtimehours;
};
void getdata(employee arr[],int v) //Adding a new Employee and storing his information;
{
    cin>>arr[v].id>>arr[v].name>>arr[v].hoursworked>>arr[v].overtimehours;
}
struct company
{
    employee empls[100];
    int num;
} company1;
void disply(employee arr[],int v) //disply data
{
    cout<<"Num.of.Emp\t"<<"ID\t\t"<<"name\t"<<"hours worked\t"<<"overtime hours"<<endl;
    for(int i=0; i<v; i++)

        cout<<i+1<<"\t\t"<<arr[i].id<<"\t\t"<<arr[i].name<<"\t\t"<<arr[i].hoursworked<<"\t"<<arr[i].overtimehours<<endl;
}
void Editing(employee arr[])
{
    int n,numofoperation;
    cout<<"Which Number Of Employee do you Want to Editing"<<endl;
    cin>>n;
    cout<<"Enter 1 for Editing id or Enter 2 For Editing name or Enter 3 For Editing hoursworked or Enter 4 For Editing Overtime hours"<<endl;
    cin>>numofoperation;
    switch(numofoperation)
    {
    case 1:
    {
        cout<<"Enter New id"<<endl;
        cin>> arr[n-1].id;
        break;
    }
    case 2:
    {
        cout<<"Enter new name"<<endl;
        cin>>arr[n-1].name;
        break;
    }
    case 3:
    {
        cout<<"Enter new hourworked";
        cin>> arr[n-1].hoursworked;
        break;
    }
    case 4:
    {
        cout<<"Enter new overtime hourse"<<endl;
        cin>> arr[n-1].overtimehours;
        break;
    }

    default:
    {
        break;
    }
    }
}
void calculating()
{

}
int main()
{
    int v;
    cout<<"Enter data of employees(id&name&hour of work&his salary)"<<endl;
    cout <<"ID\t" <<"name\t"<<"HoursWorked\t"<<"OverTime\t"<<endl;

    while(true)
    {
        char c;
        v=company1.num;
        getdata(company1.empls,company1.num);
        company1.num++;
        cout<<"to contunue enter y"<<endl;
        cin>>c;
        if(c!='y')
            break;
    }
    cout<<"number of emplyees = "<<company1.num<<endl;
    disply(company1.empls,company1.num);
    Editing(company1.empls);

    disply(company1.empls,company1.num);
    return 0;
}
