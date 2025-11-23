class Solution {
public:
    //Comparator to sort by frequency or alphabetically
    static bool comparator(pair<int, char> p1, pair<int, char> p2){
        if(p1.first > p2.first) return true;
        if(p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

    string frequencySort(string s) {
        //Initalise frequency array that stores pair
        pair<int, char> freq[128];
        for(int i =0; i < 128; i++){
            freq[i] = {0, (char)i};
        }

        //Update char frequency
        for(char c : s) freq[c].first++;

        //Sort based on comparator
        sort(freq, freq+128, comparator);

        //Store ans
        string ans;
        for(int i = 0; i < 128; i++){
            if(freq[i].first > 0) ans.append(freq[i].first, freq[i].second);
        }
        return ans;
    }
};