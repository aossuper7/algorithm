#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    arr.erase(remove(arr.begin(), arr.end(), *min_element(arr.begin(), arr.end())),arr.end());
    if(arr.size())
        return arr;
    return vector<int>{-1};
}