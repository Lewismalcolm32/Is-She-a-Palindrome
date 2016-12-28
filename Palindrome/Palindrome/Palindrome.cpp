#include <string>
#include <iostream>

bool isPalindrome(const std::string someString){
	if (!(someString.size())) return false;
	std::string tempString = someString;
	//while (tempString.size()){
		if (tempString.size()==1) return true;
		if (tolower(tempString[0]) == tolower(tempString[tempString.size() - 1])){
			//if (!tempString.size()) return false;
			tempString.erase(0,1);
			tempString.pop_back();
			if (!tempString.size()){ return true; }
			else{
				if (!isPalindrome(tempString)) { return false; }
				else {
					return true;
				}
			}

		}
		else { return false; }
	//}
	//return true;
}

int main(){
	
	std::cout << int(isPalindrome("raccar")) << std::endl;
	system("pause");
}