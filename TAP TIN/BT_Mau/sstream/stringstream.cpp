
#include <iostream>
using namespace std;
#include <string>
#include <sstream>

int main()
{
	//stringstream ss1;

	//ss1 << 100 << " " << 200;
	//cout << ss1.str() << endl;
	//int foo, bar;
	//ss1 >> foo >> bar;

	//cout << "foo: " << foo << '\n';
	//cout << "bar: " << bar << '\n';

	string filename;
	int fileNumber;
	stringstream ss;

	for (int i = 1; i <= 8; i++)
	{
		fileNumber = i;
		//ss.clear(); // xoa dinh dang chuoi ss
		//ss.str(""); // co the xoa 2 28 29 dong de thay su khac biet
		ss << fileNumber;
		filename = "data" + ss.str() + ".txt";
		//code where i process the files
		//put this here to test output
		cout << filename << endl;
	}
	ss.str("");

	//ss << 1234 << "text" << 'c';
	//cout << ss.str() << endl;
	//ss.clear();
	//ss.str("");
	//int n;
	//string s;
	//cout << "\nnhap n: \n";
	//cin >> n;
	//cout << "nhap chuoi: ";
	//fflush(stdin);
	//getline(cin, s);
	////cin >> s;
	//ss << n << "-" << s;
	//cout << ss.str() << endl;
	//ss.clear();
	//ss.str("");

								///-----------------------Cac van de ve string -------------------------
	//string s1, s2;
	//cout << "\nnhap chuoi s1: ";
	//fflush(stdin);
	//getline(cin, s1);

	//int x;
	//cout << "nhap n: ";
	//cin >> x;
	//cin.ignore(); // phai co thi s2 moi nhan dk
	//fflush(stdin);
	//cout << "nhap chuoi s2: ";
	//getline(cin, s2);
	//cout << "s1: " << s1 << " s2: " << s2 << " n = " << x << endl;


	////insert 
	//std::string str = "to be question";
	//std::string str2 = "the ";
	//std::string str3 = "or not to be";
	//std::string::iterator it;

	//// used in the same order as described above:
	//str.insert(6, str2);                 // to be (the )question
	//str.insert(6, str3, 3, 4);             // to be (not )the question
	//str.insert(10, "that is cool", 8);    // to be not (that is )the question
	//str.insert(10, "to be ");            // to be not (to be )that is the question
	//str.insert(15, 1, ':');               // to be not to be(:) that is the question
	//it = str.insert(str.begin() + 5, ','); // to be(,) not to be: that is the question
	//str.insert(str.end(), 3, '.');       // to be, not to be: that is the question(...)
	//str.insert(it + 2, str3.begin(), str3.begin() + 3); // (or )

	//std::cout << str << '\n';//to be, or not to be: that is the question...

	//// append
	//std::string str;
	//std::string str2 = "Writing ";
	//std::string str3 = "print 10 and then 5 more";

	//// used in the same order as described above:
	//str.append(str2);                       // "Writing "
	//str.append(str3, 6, 3);                   // "10 "
	//str.append("dots are cool", 5);          // "dots "
	//str.append("here: ");                   // "here: "
	//str.append(10u, '.');                    // ".........."
	//str.append(str3.begin() + 8, str3.end());  // " and then 5 more"

	//std::cout << str << '\n';

	return 0;
}