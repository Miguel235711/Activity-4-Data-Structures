#include <iostream>
#include "algorithm1Class.cpp"
#include "algorithm2Class.cpp"

using namespace std;

///big menu


int main()
{
	string the_text = "panamanian banana fanatics can manage anacondas";
	string the_pattern = "ana";
    bruteForceStringMatching::search_all(the_text,the_pattern);
    bruteForceStringMatchingIterator::search_all(the_text,the_pattern);
    smarter_search::countEveryComparissonOfStringComparisson(the_text,the_pattern);
	system("pause");
	return EXIT_SUCCESS;
}