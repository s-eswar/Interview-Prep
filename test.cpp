#include <iostream>
#include <list>
#include <python2.7/Python.h>


using namespace std;

int main ()
{
  std::list<int> mylist;
  mylist.push_back (100);
  mylist.push_back (200);
  mylist.push_back (300);
  std::list<int>::iterator i;
  for( i = mylist.begin(); i != mylist.end(); ++i)
	cout << *i << endl;
	cout <<	endl;
  std::cout << "Popping out the elements in mylist:";
  while (!mylist.empty())
  {
    cout<<mylist.front()<<endl;
    mylist.pop_front();
  }

  std::cout << "\nFinal size of mylist is " << mylist.size() << '\n';
  Py_Initialize();
  PyRun_SimpleString("print('Hello World from Embedded Python!!!')");
  Py_Finalize();   

  return 0;
}
