#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

///big menu

void search_all(string const& text, string const& pat)  {
    int const pat_size(pat.size());
    int const endpos(text.size() - pat_size + 1);
    for (int POs(0); POs < endpos; ++POs){
        int comparison = text.compare(POs,pat_size,pat);
        cout << setw(2) << POs << " |";
        cout << setw(3) << text.substr(POs,pat_size) << "| " << comparison << " " << (!comparison? "<--- match!":"")<<"\n";
    }
}

int main()
{
	string the_text = "panamanian banana fanatics can manage anacondas";
	string the_pattern = "ana";
	search_all(the_text, the_pattern);
	system("pause");
	return EXIT_SUCCESS;
}