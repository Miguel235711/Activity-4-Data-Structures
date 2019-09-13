#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

class bruteForceStringMatching{
public:
    static void search_all(string const& text, string const& pat)  {
        cout << "Results of bruteForceStringMatching()\n";
        int const pat_size(pat.size());
        int const endpos(text.size() - pat_size + 1);
        for (int POs(0); POs < endpos; ++POs){
            int comparison = text.compare(POs,pat_size,pat);
            cout << setw(2) << POs << " |";
            cout << setw(3) << text.substr(POs,pat_size) << "| " << comparison << " " << (!comparison? "<--- match!":"")<<"\n";
        }
    }
};