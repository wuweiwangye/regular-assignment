#include <iostream>
#include <fstream>
using namespace std;
//class CStudent
//{
//public:
//    char szName[20];
//    int age;
//};
//int main()
//{
//    CStudent s;
//    ofstream outFile("students.dat", ios::out | ios::binary);
//    while (cin >> s.szName >> s.age)
//        outFile.write((char*)&s, sizeof(s));
//    outFile.close();
//    return 0;
//}
class CStudent
{
public:
	char szName[20];
	int age;
};
//将数据以二进制写入文件
int main()
{
	CStudent s;
	ofstream outFile("students.dat", ios::out | ios::binary);
	cout << "请输入学生信息：" << endl;
	while (cin >> s.szName >> s.age)
		outFile.write((char*)&s, sizeof(s));
	outFile.close();
	return 1;
}
