class Solution {
public:
    pair<int,int> parse(string s){
        int pos=s.find('+');

        int real = stoi(s.substr(0,pos));
        int imag = stoi(s.substr(pos+1,s.size()-pos-2));

        return {real,imag};
    }

    string complexNumberMultiply(string num1, string num2) {
        
        auto p1 = parse(num1);
        auto p2 = parse(num2);

        int real = p1.first * p2.first - p1.second * p2.second;
        int imag = p1.first * p2.second + p1.second * p2.first;

       return to_string(real) + "+" + to_string(imag) + "i";
    }
};