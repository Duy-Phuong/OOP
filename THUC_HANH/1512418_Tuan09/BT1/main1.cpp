#include "Client.h"

int main()
{
	//int count;
	//cout << "ban muon nhap bao nhieu khach hang: ";
	//cin >> count;
	//vector <Client*> list;
	//int ID;
	//string Name;
	//double balance;

	//for (int i = 0; i < count; i++)
	//{
	//	cout << "nhap thong tin khach hang " << i + 1 << " :\n";
	//	cout << "nhap ID: ";
	//	cin >> ID;
	//	cout << "ten: ";
	//	fflush(stdin);
	//	getline(cin, Name);
	//	cout << "nhap so tien trong tai khoan: ";
	//	cin >> balance;
	//	list.push_back(new Client(ID, Name, balance));
	//}

	//ofstream writer("clients.txt");
	//if (!writer)
	//{
	//	cout << "khong mo duoc file\n";
	//	exit(EXIT_FAILURE);
	//}
	//writer << list.size();
	//for (auto& client : list)
	//	writer << endl << client->Tostring();
	//writer.close();

	//doc
	ifstream reader("clients.txt");
	if (!reader)
	{
		cout << "khong mo duoc file\n";
		exit(EXIT_FAILURE);
	}
	string line;
	getline(reader, line, '\n');
	int count = stoi(line);
	vector <Client*> list;
	for (int i = 0; i < count; i++)
	{
		getline(reader, line, '\n');

		Client* client = Client::Parse(line);
		list.push_back(client);
	}
	
	for (auto& client : list)
		cout << endl << client->Tostring();
	reader.close();

	//string s;
	//int i;
	//fflush(stdin);
	//getline(cin, s);
	//i = stoi(s);
	//cout << i << endl;
	return 0;
}