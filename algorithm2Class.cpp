#include<iostream>
#include<string>

using namespace std;

class bruteForceStringMatchingIterator{
    public:
        static void search_all(string const& text, string const& pat)  {
            cout << "Results of bruteForceStringMatchingIterator()\n";
            int pos = 0 ;
            for(auto it1 = text.begin();it1+pat.size()-1<text.end();it1++){
                cout << "does start at position (" << pos++ << ") match with pattern?: ";
                bool  itMatches = true; 
                for(auto it2 = pat.begin(),it1Aux=it1;it2!=pat.end();it2++,it1Aux++){///check if they match
                    if(*it1Aux!=*it2){///cannot match
                        itMatches=false;
                        cout << "0\n";
                        break;
                    }
                }
                if(itMatches)
                    cout << "1\n";///matching
            }
        }
};