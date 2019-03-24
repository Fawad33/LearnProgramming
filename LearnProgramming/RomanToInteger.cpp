#include<iostream>
#include<string>

using namespace std;

int romanToInteger(string input){
	int total = 0;
	for (auto x : input){
		if (x == 'I'){
			if (x + 1 == 'V'){
				total += 4;
				x++;
			}
			else if (x + 1 == 'X'){
				total += 9;
				//x = x + 1;
			}
			else{
				total += 1;
			}
			
		}
		else if (x == 'V'){
			total += 5;
		}
		else if (x == 'X'){
			total += 10;
			if (x + 1 == 'L'){
				total += 40;
				x = x + 1;
			}
			else if (x + 1 == 'C'){
				total += 90;
				x = x + 1;
			}
			else{
				total += 1;
			}
		}
		else if (x == 'L'){
			total += 50;
		}
		else if (x == 'C'){
			total += 100;
			if (x + 1 == 'D'){
				total += 400;
				x = x + 1;
			}
			else if (x + 1 == 'M'){
				total += 900;
				x = x + 1;
			}
			else{
				total += 1;
			}
		}
		else if (x == 'D'){
			total += 500;
		}
		else if (x == 'M'){
			total += 1000;
		}
	}
	return total;
}

int main(){
	string input;
	cout << "Enter a valid roman number: ";
	cin >> input;
	cout <<"Integer value of the string is: " << romanToInteger(input) << endl;

	return 0;
}