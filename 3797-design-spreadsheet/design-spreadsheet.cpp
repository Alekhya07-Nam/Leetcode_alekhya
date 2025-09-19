class Spreadsheet {
public:
    int m;
    vector<vector<int>> mat;
    Spreadsheet(int rows) {
        m=rows;
        mat=vector<vector<int>>(m, vector<int>(27, 0));
    }
    void setCell(string cell, int value) {
        char s1=cell[0];
        int val= stoi(cell.substr(1));
        int matval=s1-'A';
       mat[val - 1][matval] = value;

    }
    
    void resetCell(string cell) {
          char s1=cell[0];
        int val= stoi(cell.substr(1));
        int matval=s1-'A';
       mat[val - 1][matval] = 0;

    }
    
      int getValue(string formula) {
        formula = formula.substr(1);  
        int plus = formula.find('+');
        string a = formula.substr(0, plus);
        string b = formula.substr(plus + 1);
        return evaluate(a) + evaluate(b);
    }

private:
    int evaluate(string token) {
        if (isdigit(token[0])) {
            return stoi(token);
        }
        char colChar = token[0];
        int row = stoi(token.substr(1));
        int col = colChar - 'A';
        return mat[row - 1][col];
    }
};
/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */