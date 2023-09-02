#include<iostream>
#include<string>
using namespace std;

//class Solution {
//public:
//    bool IsLetter(char a)
//    {
//        if ((a >= 'a' && a <= 'z')
//            || (a >= 'A' && a <= 'Z'))
//            return true;
//        else
//            return false;
//    }
//    string reverseOnlyLetters(string s) {
//        int beg = 0;
//        int end = s.size() - 1;
//        while (beg < end)
//        {
//            while (beg < end && !IsLetter(s[beg]))
//                beg++;
//            while (beg < end && !IsLetter(s[end]))
//                end--;
//            swap(s[beg], s[end]);
//            beg++;
//            end--;
//        }
//        return s;
//    }
//};
//
//void test()
//{
//    Solution a;
//    string s1("ab-cd");
//    a.reverseOnlyLetters(s1);
//    cout << s1 << endl;
//}
//
//int main()
//{
//    test();
//}

//void test_string1()
//{
//	string s1;
//	string s2("hello world!!!");
//	cout << s1 << endl;
//	cout << s2 << endl;
//
//	string s3(s2);
//	cout << s3 << endl;
//
//	string s4(s2, 6);
//	cout << s4 << endl;
//
//	/*cin >> s1 >> s2;
//	cout << s1 << endl;
//	cout << s2 << endl;*/
//}
//
//void test_string2()
//{
//	string s1;
//	string s2 = "xxxxx";
//
//	s1 = s2;
//	s1 = "hello world";
//	s1 = 'y';
//}
//
//void test_string3()
//{
//	string s1("hello world");
//
//	cout << s1[0] << endl;
//	s1[1] = 'a';
//	//s1[1] = "a";//报错
//	cout << s1[1] << endl;
//
//	//要求遍历每个字符，每个字符+1
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		s1[i]++;
//	}
//	cout << s1 << endl;
//}
//

//void test_string4()
//{
//	string s("hello");
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}

//void PrintString(const string& str)
//{
//	//string::const_iterator it = str.begin();
//	/*auto it = str.begin();
//	while (it != str.end())
//	{
//		cout << *it << "";
//	}
//	cout << endl;*/
//
//	//auto it = str.begin();
//	string::const_reverse_iterator rit = str.rbegin();
//	while (rit != str.rend())
//	{
//		cout << *rit << "";
//		++rit;
//	}
//	cout << endl;
//}
//
//void test_string5()
//{
//	string s("hello");
//	string::reverse_iterator rit = s.rbegin();//反向迭代器
//	while (rit != s.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//}

//void test_string6()
//{
//	string s("hello");
//	s.push_back(' ');
//	s.push_back('-');
//	s.append("world");
//	cout << s << endl;
//
//	string str("我莱辣");
//	s += '@';
//	s += str;
//	s += "!!!";
//	cout << s << endl;
//
//	s.append(++str.begin(), --str.end());//可以使用迭代器区间去控制,初始化
//	cout << s << endl;
//
//	//string copy(++s.begin(), --s.end());
//	string copy(s.begin()+5, s.end()-5);
//	cout << copy << endl;
//}

//void test_string7()
//{
//	//string s1;
//	//string s2("11111111111111111");
//	//cout << s1.max_size() << endl;//9223372036854775807
//	//cout << s2.max_size() << endl;//9223372036854775807
//
//	//cout << s2.capacity() << endl;
//	//cout << s1.capacity() << endl;
//
//	string s;
//	//s.reserve(1000);  //保留  开空间
//	s.resize(1000,'o');     //开空间 + 初始化
//	size_t sz = s.capacity();
//
//	cout << "making a grow:";
//	cout << sz << endl;
//	for (int i = 0; i < 1000; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed:" << sz << '\n';
//		}
//	}
//
//}

class Solution {
public:
    string addStrings(string num1, string num2) {
        int next = 0;
        size_t end1 = num1.size() - 1;
        size_t end2 = num2.size() - 1;
        string str;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
            int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
            int sum = val1 + val2 + next;
            next = sum > 9 ? 1 : 0;
            str.insert(str.begin(), (sum % 10) + '0');

            --end1;
            --end2;
        }

        return str;
    }
};

int main()
{
    Solution a;
    string str=a.addStrings("123", "112");
    cout << str << endl;
	return 0;
}