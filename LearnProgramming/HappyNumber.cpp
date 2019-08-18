//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<int> v;
//
//bool ishappy(int n){
//	int sum = 0, ntemp = n;	
//	if (n == 1){
//		return true;
//	}
//	while (n > 0){
//		sum += pow(n % 10,2);
//		n = n / 10;
//	}
//
//	v.push_back(ntemp);
//
//	for (auto i = v.begin(); i != v.end(); i++){
//		if (*i == sum){
//			return false;
//		}
//		
//	}
//	return ishappy(n);
//	
//}


//void main(){
//	int num;
//	cout << "enter a number: ";
//	cin >> num;
//	if (ishappy(num) == true){
//		cout << "true";
//	}
//	else{
//		cout << "false";
//	}
//}