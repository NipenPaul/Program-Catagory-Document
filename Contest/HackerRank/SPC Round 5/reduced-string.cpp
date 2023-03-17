#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    while(s.size() > 1){
        bool ok = false;
        int n = s.size();
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                ok = true;
                break;
            }
        }
        if(ok == false){
            break;
        }
    }
    if(s.size() > 0)
        return s;
    return "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
