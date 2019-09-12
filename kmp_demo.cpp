#include"mp_demo.cpp"
#include<fstream>

class kmp_demo{
    public:
    static void printMatches(const string & pattern,const string & filename){
        ifstream in;
        in.open(filename); 
        if(in.fail()){
            ///file could not be opened as file
            cout << "error while trying to open file called " << filename << "\n";
        }else{
            ///file was opened succesfully
            cout << "file " << filename << " was opened successfully\n";
            //mp_demo::MPentry(int i) to get value of table
            ///get string from in
            string s,partialS;
            while(in>>partialS){
                s.append(partialS);
            }
            ///determine matches of pattern in s
            unsigned int i = 0 ; 
            while(i+pattern.size()<=s.size()){///s can be checked from range [i to i + pattern.size()]
                ///get the max matching
                unsigned int k = 0 , ith = i ; 
                while(k<pattern.size()&&pattern[k]==s[ith])ith++,k++; ///advance i and k , because pattern[k]  and s[i] match
                if(k==pattern.size()) cout << "new match at i = " << i << "\n";
                i += k - mp_demo::MPentry(pattern,k);
            }
        }
    }
};