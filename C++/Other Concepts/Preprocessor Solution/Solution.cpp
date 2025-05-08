#define FUNCTION(name, op) void name(int& a, int b) { if (b op a) a = b; }
#define io(a) cin >> a
#define INF 1000000000
#define toStr(b) #b
#define foreach(v, i) for (int i = 0; i < v.size(); i++)
