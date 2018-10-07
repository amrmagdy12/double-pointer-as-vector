#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

string* addEntry(string *dynamicArray, int &size, string newEntry);
string *deleteEntry(string *dynamicArray, int &Size, string entryToDelete);

int main()
{
	int Size;
	cout << "Enter the size of Darray : ";
	cin >> Size;

	string* dynArr = new string[Size];
	for (int i = 0; i < Size; i++)
	{
		cin >> dynArr[i];
	}



int Choice ;
cout << " 1- add a word\n 2- Delete a word \n 3- Exit " ;
cin >> Choice ;

if(Choice == 1 )
{
    string addNew;
	cout << "add New entry : ";
	cin >> addNew;

	string* dynArr2 = new string[Size+1];
	dynArr2 = addEntry(dynArr, Size, addNew);

	for (int i = 0; i < Size;i++)
		cout << dynArr2[i] << endl;



}
else if (Choice == 2)
{
    string Deleteentry;
	cout << "choose an entry to delete :";
	cin >> Deleteentry;

	string *dynArr3 = new string [Size-1];
	 dynArr3 = deleteEntry(dynArr, Size, Deleteentry) ;

	for (int i = 0 ; i < Size ;i++){
            cout << dynArr3[i] << endl;
    }


}

else
    return 0 ;



	return 0;
}

string* addEntry(string* dynamicArray, int &size, string newEntry)
{
	string* dynArr = new string[size+1];
	for (int i = 0; i < size; i++)dynArr[i] = dynamicArray[i];
	dynArr[size] = newEntry;
	delete[] dynamicArray;
	size++;
	return dynArr;

}


string* deleteEntry(string *dynamicArray, int &Size, string entryToDelete)
{
    string* dynArr = new string[Size-1];
	for (int i = 0, k =0 ; i < Size ; i++,k++)
    {
        if(dynamicArray[i] != entryToDelete)
        {
                dynArr[k] = dynamicArray[i];
        }
        else{
           k-- ;
        }

     }
	delete[] dynamicArray;
    Size-- ;
	return dynArr;

}
