/*Main.cpp*/
#include <iostream>
#include <string>
#include "store.h"

using namespace std;

int main(int argc, char *argv[])
{

	if (argc != 1)
	{
		//cout << argv[1] << endl;
		if (argv[1] == "h")
		{
			cout << "It is help" << endl;
			system("pause");
			return 0;
		}
	}

	db_store Shop(77, "Item 4", 0, 99, 2, 4);
	cout << "Count: " << Shop.getCount() << endl;
	cout << "Item id: " << Shop.getItem_id() << endl;
	cout << "Item name: " << Shop.getItem_name() << endl;
	cout << "Item price: " << Shop.getProice() << endl;
	cout << "Item quanity: " << Shop.getQuantity() << endl;
	cout << "Store name: " << Shop.getStore_num() << endl;

	system("pause");

	return 0;
}
