#include<iostream>
using namespace std;
int main()
{
    cout<<"WELCOME TO STUDENT GRADING SYSTEM"<<endl;
    int i,n,l;
    float mark, sum=0, avg;
    string s;
    cout<<"ENTER THE NUMBER OF STUDENTS"<<endl;
    cin>>n;
    cout<<"ENTER THE NUMBER OF SUBJECTS"<<endl;
    cin>>l;
    for(int k=1;k<=n;k++){
        cout<<"ENTER THE NAME OF "<<k<<"TH STUDENT: ";
        cin>>s;

        cout<<"Enter Marks obtained in "<<l<<" Subjects: ";

     for(i=0; i<l; i++)
    {

        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/l;
    float t=l*100;
    float u=sum/t;
    float perc=u*100;
    cout<<"Name of student is: "<<s<<endl;

    if(avg>=91 && avg<=100){

        cout<<"\nGrade of the Student is= A1"<<endl;

        cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=81 && avg<91){
        cout<<"\nGrade of the Student is= A2"<<endl;
         cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=71 && avg<81){
        cout<<"\nGrade of the Student is= B1"<<endl;
         cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=61 && avg<71){
        cout<<"\nGrade of the Student is= B2"<<endl;
         cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=51 && avg<61){
        cout<<"\nGrade of the Student is= C1"<<endl;
         cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=41 && avg<51){
        cout<<"\nGrade of the Student is= C2"<<endl;
         cout<<"Percentage of Student is: "<<perc;}
    else if(avg>=33 && avg<41){
        cout<<"\nGrade of the Student is= D"<<endl;
         cout<<"Percentage of Student is: "<<perc;}

    else{
            cout<<"Percentage of Student is: "<<perc<<endl;
        cout<<"The student has Failed the examination";}
    cout<<endl;
    }
    return 0;
}
