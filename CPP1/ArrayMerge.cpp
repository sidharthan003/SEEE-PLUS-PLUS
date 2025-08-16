#include "Array.h"
using namespace std;

class ArrayMerge{
	
	public:
	static Array merge(Array a, Array b)
	{
		Array ab;
		int i=0,j=0;
		a.sortArray();
		b.sortArray();
		while(i<a.getSize() && j<b.getSize())
		{
			if(a.getElement(i)<b.getElement(j))
				ab.addElement(a.getElement(i++));
			else
				ab.addElement(b.getElement(j++));
		}
		while(i<a.getSize())
		{
			ab.addElement(a.getElement(i++));
		}
		while(j<b.getSize())
		{
			ab.addElement(b.getElement(j++));
		}
		return ab;
	}
};
 