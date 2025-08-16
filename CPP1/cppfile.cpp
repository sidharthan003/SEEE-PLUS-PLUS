#include<fstream>

using namespace std;

int main()
{
	ofstream f("abc.txt",ios_base::out);
	for(int i=1;i<=10;i++)
		f<<i<<endl;
	f.close();
	return 0;
}