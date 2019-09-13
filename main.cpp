#include <iostream>
#include "algorithm1Class.cpp"
#include "algorithm2Class.cpp"
#include "kmp_demo.cpp"
#include "smarter_search.cpp"
///Miguel Ángel Muñoz Vázquez , Aarón Pérez Ontiveros
using namespace std;

vector<int> mp_demo::MPtable;
string mp_demo::pat_;

///big menu

void printTheory1(){
	cout <<"theory 1:\n";
	cout<<"1.- N-M+1 \n2.- 2 \n3.- It would do the comparisons until the Text String is over. \n ";
}

void printTheory2(){
	cout << "theory 2:\n";
	cout<<"1.- -1000123 \n2.- MP – -1012345 \n    KMP - -1123456";
}

int main()
{
	smarter_search smarter_search;
	string com="0";
	string s,pattern;
	while(com!="8"){ /// because 8 means exit
		system("cls");
		cout << "1 for compare_demo\n";
		cout << "2 for iter_demo\n";
		cout << "3 for smarter_search\n";
		cout << "4 for mp_demo\n";
		cout << "5 for kmp_demo\n";
		cout << "6 for search_chlorella_vulgaris\n";
		cout << "7 to print answers to questions 1,2 and 3\n";
		cout << "8 to print answers to questions 4 and 5\n";
		cout << "9 exit\n"; 
		cout << "enter command: ";
		cin >> com;
		if(com=="1"){
			///compare_mode
			cout << "compare mode\n";
			cout << "enter s: " ;
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			bruteForceStringMatching::search_all(s,pattern);
		}else if(com=="2"){
			///iter_demo
			cout << "iter mode\n";
			cout << "enter s: " ;
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			bruteForceStringMatchingIterator::search_all(s,pattern);
		}else if(com=="3"){
			///smarter_search
			cout << "smarter_search\n";
			cout << "enter pattern to generate and  print its mp_table: ";
			cin >> pattern;
			cout << "enter string to look for the word";
			cin>> s;
			smarter_search.countEveryComparissonOfStringComparisson(s,pattern);
		}else if(com=="4"){
			///mp_demo
			cout << "mp demo\n";
			cout << "enter pattern to generate and  print its mp_table: ";
			cin >> pattern;
			mp_demo::printMPTable(pattern);
		}else if(com=="5"){
			///kmp_demo
			cout << "kmp demo\n";
			cout << "enter file name of s: ";
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			kmp_demo::printMatches(pattern,s,0);
		}else if(com=="6"){
			///search_chlorella_vulgaris
			cout << "search_chlorella_vulgaris\n";
			cout << "enter pattern: ";
			cin >> s;

			kmp_demo::printMatches(s,"chlorella_vulgaris.dat",1);
		}else if(com=="7"){
			///print answers to questions 1 , 2 and 3 
			printTheory1();
		}else if(com=="8"){
			///print answers to questions 4 and 5 
			printTheory2();
		}else if(com!="9"){
			cout << "command no valid";
		}
		system("pause");
	}
	return EXIT_SUCCESS;
}