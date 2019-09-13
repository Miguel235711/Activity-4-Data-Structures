#include <iostream>
#include<vector>
#include<string>

using namespace std;

////MPtable=[-1,....] 0 indexed with 1 shift to the right
////pat =       [0,1,2]
class mp_demo{
    static vector<int> MPtable;
    static string pat_;
    static void calcMPtable(string const &pat){///recalculate only if necessary , 
        if(pat_!=pat){
            pat_=pat;
            ///calculate MPtable in linear time O(pat.size())
            MPtable.clear();///clear MPtable
            MPtable.push_back(0);//always 0 in first position for construction
            for(unsigned int ithChar = 1 ; ithChar < pat.size();ithChar++){
                ///for each index of path
                int j = MPtable[ithChar-1];///before index
                while(j>0&&pat[ithChar]!=pat[j])
                    j=MPtable[j-1];
                if(pat[ithChar]==pat[j])
                    j++;
                MPtable.push_back(j);
            }
            MPtable[0]=-1;///assign the default -1
        }
    }  
    public:
    static void printMPTable(string const&pat){
        calcMPtable(pat);
        cout << "MP table of size: " << pat.size() << ": [ ";
        for(int MPentry:MPtable)
            cout << MPentry << " , ";
        cout << " ]\n";
    }
    static int MPentry(string const&pat,unsigned int i){/// path is 0 indexed 
        calcMPtable(pat);
        if(i>pat.size())return -1; ///no valid index
        if(i==pat.size())return 0;
        return MPtable[i];
        return 0;
    }
};
