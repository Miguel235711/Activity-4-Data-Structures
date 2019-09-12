#include <iostream>
#include "algorithm1Class.cpp"
#include "algorithm2Class.cpp"
#include "kmp_demo.cpp"

using namespace std;

vector<int> mp_demo::MPtable;
string mp_demo::pat_;

///big menu

void printTheory1(){
	cout <<"theory 1:\n";
}

void printTheory2(){
	cout << "theory 2:\n";
}

int main()
{
	int com=0;
	string s,pattern;
	while(com!=8){ /// because 8 means exit
		system("cls");
		cout << "1 for compare_demo\n";
		cout << "2 for iter_demo\n";
		cout << "3 for mp_demo\n";
		cout << "4 for kmp_demo\n";
		cout << "5 for search_chlorella_vulgaris\n";
		cout << "6 to print answers to questions 1,2 and 3\n";
		cout << "7 to print answers to questions 4 and 5\n";
		cout << "8 to print answers to questions 4 and 5\n";
		cout << "9 exit\n"; 
		cout << "enter command: ";
		cin >> com;
		if(com==1){
			///compare_mode
			cout << "compare mode\n";
			cout << "enter s: " ;
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			bruteForceStringMatching::search_all(s,pattern);
		}else if(com==2){
			///iter_demo
			cout << "iter mode\n";
			cout << "enter s: " ;
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			bruteForceStringMatchingIterator::search_all(s,pattern);
		}else if(com==3){
			///mp_demo
			cout << "mp demo\n";
			cout << "enter pattern to generate and  print its mp_table: ";
			cin >> pattern;
			mp_demo::printMPTable(pattern);
		}else if(com==4){
			///kmp_demo
			cout << "kmp demo\n";
			cout << "enter file name of s: ";
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			kmp_demo::printMatches(pattern,s);
		}else if(com==5){
			///search_chlorella_vulgaris
			cout << "search_chlorella_vulgaris\n";
		}else if(com==6){
			///print answers to questions 1 , 2 and 3 
			printTheory1();
		}else if(com==7){
			///print answers to questions 4 and 5 
			printTheory2();
		}else if(com==8){
			cout << "enter s: " ;
			cin >> s;
			cout << "enter pattern: ";
			cin >> pattern;
			
		}
		else if(com!=9){
			cout << "command no valid";
		}
		system("pause");
	}
	return EXIT_SUCCESS;
}