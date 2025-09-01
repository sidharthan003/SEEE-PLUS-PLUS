#include <iostream>
using namespace std;

class palindrome{
	public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0)) return false;
		
			int reversed = 0;
			while(x > reversed){
				reversed = reversed * 10 + x % 10;
				x = x/10;}
			
			return ( x == reversed) || (x == reversed / 10);
			
			} 
};
int main(){
	 palindrome sol;
	 cout << boolalpha;
	 cout << "12321 -> " << sol.isPalindrome(12321) << endl;
	 cout << "123456 -> " << sol.isPalindrome(123456) << endl;
}