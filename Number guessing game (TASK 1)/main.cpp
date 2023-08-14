
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number, ans;
    srand(time(0));
	number = rand() % 10 + 1;
	cout << "Number Guess Game"<<endl<<endl;
	int count=1;

	do
	{
		cout << "Enter a guess between 1 to 10 : ";
		cin >> ans;


		if (ans > number){
			cout << "Your Guess is Too high!"<<endl;
			count+=1;}

		else if (ans < number){
			cout << "Your Guess is Too low!"<<endl;
			count+=1;}
		else{
            cout<<endl;
			cout << "You Got Correct Answer in "<<count<<" Tries ,Congratulations"<<endl;}

	} while (ans != number);

	return 0;
}
