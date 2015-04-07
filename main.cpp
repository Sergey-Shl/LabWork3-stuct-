#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct db_store
{
	int store_num;
	std::string item_name;
	int item_id;
	int item_price;
	int item_count;
};

int main()
{
	vector<db_store> items;
	db_store item;
	item.store_num = 241;
	item.item_name = "Item ";
	item.item_id = 1;
	item.item_price = 199;
	item.item_count = 4;
	items.push_back(item);
	char c;
	do {
		cout << "Store num: ";
		cin >> item.store_num;
		cout << "Item name: ";
		cin >> item.item_name;
		cout << "Item id: ";
		cin >> item.item_id;
		cout << "Item price: ";
		cin >> item.item_price;
		cout << "Item count: ";
		cin >> item.item_count;
		cout << "Do you want to add new item? (y/n)" << endl;
		items.push_back(item);
		cin >> c;
	} while (c == 'y'); 

	cout << "Do ypu want to see all items? (y/n)" << endl;
	cin >> c;
	if (c == 'y')
	{
		for (int i = 0; i < items.size(); i++)
		{
			cout << "Item " << i + 1 << endl;
			cout << "Store num: " << items[i].store_num << endl;
			cout << "Item name: " << items[i].item_name << endl;
			cout << "Item id: " << items[i].item_id << endl;
			cout << "Item price: " << items[i].item_price << endl;
			cout << "Item count: " << items[i].item_count << endl;
		}
	}
	items.clear();
	system("pause");
	return 0;
}
