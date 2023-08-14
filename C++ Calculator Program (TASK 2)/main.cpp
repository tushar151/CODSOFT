#include <iostream>

using namespace std;

int main()
{
    int option;
    float a ,b;
    do{
    cout<<"MY CALCULATOR"<<endl;
    cout<<endl;
    cout<<"OPTIONS"<<endl;
    cout<<endl;
    cout<<"1.ADDITION"<<endl;
    cout<<"2.SUBTRACTION"<<endl;
    cout<<"3.MULTIPLICATION"<<endl;
    cout<<"4.DIVISION"<<endl;
    cout<<"5.EXIT FROM THE CALCULATOR"<<endl;
    cout<<endl;

    cout<<"ENTER OPTION NUMBER"<<endl;
    cin>>option;
    cout<<endl;
    if(option==1){
        cout<<"You are Performing Addition"<<endl;
        cout<<"Enter Two Numbers for addition: "<<endl;
        cin>>a>>b;
        cout<<"The Result After Addition is "<<a+b<<endl;
        cout<<endl;
    }
     else if(option==2){
        cout<<"You are Performing Subtraction"<<endl;
        cout<<"Enter Two Numbers for Subtraction: "<<endl;
        cin>>a>>b;
        cout<<"The Result After Subtraction is "<<a-b<<endl;
        cout<<endl;
    }
     else if(option==3){
        cout<<"You are Performing Multiplication"<<endl;
        cout<<"Enter Two Numbers for Multiplication: "<<endl;
        cin>>a>>b;
        cout<<"The Result After Multiplication is "<<a*b<<endl;
        cout<<endl;
    }
     else if(option==4){
        cout<<"You are Performing Division"<<endl;
        cout<<"Enter Two Numbers for Division: "<<endl;
        cin>>a>>b;
        cout<<"The Result After Division is "<<a/b<<endl;
        cout<<endl;
    }
    else if(option>4 and option!=5){
        cout<<"WRONG OPTION ENTERED"<<endl;
        cout<<endl;
    }
    else if(option==5){
        cout<<"Exiting from the calculator"<<endl;
        cout<<endl;
        cout<<"THANKYOU FOR USING MY CALCULATOR"<<endl;
        cout<<endl;
        cout<<"HOPE IT GAVE YOU CORRECT RESULTS"<<endl;
    }
    }while (option!=5);
    return 0;
}
