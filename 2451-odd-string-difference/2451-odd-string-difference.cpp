class Solution {
public:
    vector<int> score(string x)
    {
        vector<int> p;
        for(int i=1; i<x.size(); i++) p.push_back((x[i]-'a')-(x[i-1]-'a'));
        return p;
    }
    
    
    string oddString(vector<string>& words) {
        
        for(int i=1; i<words.size()-1; i++)
            if(score(words[i])!=score(words[i+1]) && score(words[i])!=score(words[i-1])) return words[i];
        
        if(score(words[0])!=score(words[1])) return words[0];
        return words[words.size()-1];
            
    }
	
	
};