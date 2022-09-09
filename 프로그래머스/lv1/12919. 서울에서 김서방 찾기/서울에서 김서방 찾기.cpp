#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int i=0;
    string str = "김서방은 ";
    for(; i<seoul.size(); i++)
        if(seoul[i] == "Kim")
            str += to_string(i)+"에 있다";
    return str;
}