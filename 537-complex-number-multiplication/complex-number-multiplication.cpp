class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a = stoi(num1.substr(0, num1.find('+')));
        int b = stoi(num1.substr(num1.find('+') + 1, num1.length() - num1.find('+') - 2));
        int c = stoi(num2.substr(0, num2.find('+')));
        int d = stoi(num2.substr(num2.find('+') + 1, num2.length() - num2.find('+') - 2));
       int r1=(a*c)-(b*d), r2=(a*d)+(b*c);
       return to_string(r1)+"+"+to_string(r2)+"i"; 
    }
};