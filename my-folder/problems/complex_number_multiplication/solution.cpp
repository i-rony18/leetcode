class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        auto it1=num1.find('+');
        auto it2=num2.find('+');
        auto it3=num1.find('i');
        auto it4=num2.find('i');
        int real1=stoi(num1.substr(0,it1));
        int real2=stoi(num2.substr(0,it2));
        int img1=stoi(num1.substr(it1+1,it3));
        int img2=stoi(num2.substr(it2+1,it4));
        int rtotal=(real1*real2+(-1*(img1*img2)));
        int imgtotal=real1*img2+real2*img1;
        string ans="";
        ans+=to_string(rtotal)+"+"+to_string(imgtotal)+"i";
        return ans;
    }
};