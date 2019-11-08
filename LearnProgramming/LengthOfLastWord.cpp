#include<iostream>
#include<string>

using namespace std;

class LengthOfLastWord {
public:
	int lengthOfLastWord(string s) {
		s = s.erase(s.find_last_not_of(" \n\r\t") + 1);//copied from stack overflow, not clear about this line
		int size = s.size(); 
		int lengthOfLastWord = 0;
		for (int i = size - 1; i >= 0; i--) {
			if (s.at(i) == ' ') {
				break;
			}
			else {
				lengthOfLastWord++;
			}
			
		}
		return lengthOfLastWord;
	}
};

//void main() {
//	LengthOfLastWord lengthOfLastWordObject;
//	cout << lengthOfLastWordObject.lengthOfLastWord("Hello World      ");
//}