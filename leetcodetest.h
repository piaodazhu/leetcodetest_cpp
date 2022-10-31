#include <iostream>
#include <vector>
#include <stack>
#include <assert.h>
using namespace std;

#define LCTEST_BEGIN			int main() { Solution __sl; int __tot = 0, __pass = 0;
#define LCTEST_END			cout << "test done: [" << __pass << "/" << __tot << "]" << endl; return 0;}

#define LCTEST_CHAR(v)			char(v)
#define LCTEST_INT(i)			int(i)
#define LCTEST_DOUBLE(i)		double(d)
#define LCTEST_STRING(str)		string(str)
#define LCTEST_VECTOR(type, ...)	vector<type>({__VA_ARGS__})

#define LCTEST_MKVAL(valname, val)	auto valname = val;

#define LCTEST_PRINTVAL(title, val)	cout << title << ": " << val << endl;
#define LCTEST_PRINTVEC(title, vec)	cout << title << ":" << endl; for (auto &v : vec) { cout << v << ", "; } cout << endl;
#define LCTEST_PRINTVECVEC(title, vecvec)	cout << title << ":" << endl; for (auto &vec : vecvec) { for (auto &v : vec) {cout << v << ", ";} cout << endl; } cout << endl;

#define LCTEST_RUNFUNC_NORET(funcname, ...)		__sl.funcname(__VA_ARGS__);
#define LCTEST_RUNFUNC_RETURN(ret, funcname, ...)	auto ret = __sl.funcname(__VA_ARGS__);

#define LCTEST_REQUIRE(logic)		if (!(logic)) {cout << "required not meet: line " << __LINE__ << endl; return 0; }
#define LCTEST_TEST(logic)		++__tot; if ((logic)) { ++__pass; }
#define LCTEST_ASSERT(...)		assert(__VA_ARGS__)
#define LCTEST_IF(logic)		if ((logic)) {
#define LCTEST_ELSEIF(logic)		} else if ((logic)) {
#define LCTEST_ELSE			} else {
#define LCTEST_ENDIF			}

#define LCTEST_TEST_SAMESTR(str1, str2)	++__tot; if ((str1) == (str2)) { ++__pass; }
#define LCTEST_TEST_SAMEVEC(vec1, vec2)	++__tot; if ((vec1).size() == (vec2).size()) { int len = (vec1).size(); bool b = true; for (int i = 0; i < len; i++) {if ((vec1)[i] != (vec2)[i]) {b = false; break;} } if (b) ++__pass; }

