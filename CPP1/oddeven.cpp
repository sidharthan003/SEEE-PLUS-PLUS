#include<fstream>

using namespace std;

int main()
{
	ifstream f("abc.txt",ios_base::in);
	ofstream of("odd.txt",ios_base::out);
	ofstream ef("even.txt",ios_base::out);
	int i;
	do
	{
		f>>i;
		if(i%2==0)
			ef<<i<<endl;
		else
			of<<i<<endl;
	}while(!f.eof());
	f.close();
	return 0;
}