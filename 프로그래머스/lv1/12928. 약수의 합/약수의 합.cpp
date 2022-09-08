using namespace std;

int solution(int n) {
    int s = n;
    for(int i=1; i<=n/2; i++) {
        if(n%i == 0)
            s += i;
    }
    return s;
}