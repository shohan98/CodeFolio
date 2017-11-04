#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int T, cases;
	double v1, v2, v3, a1, a2, s, t, t1, t2;
	cin >> T;
	cases = 1;
	while( T-- ){
        cin >>v1 >>v2 >>v3 >>a1 >>a2;
        s = (v1*v1/2/a1) + (v2*v2/2/a2);
        t1 = v1/a1;
        t2 = v2/a2;
        if(t1>t2) t = t1;
        else t = t2;
        printf("Case %d: %0.8lf %lf\n", cases++, s, t*v3 );
	}
	return 0;
}
