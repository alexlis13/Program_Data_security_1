#include <iostream>
#include <string>
#include <typeinfo>

#define ililililil "fxx&(f~"
#define liilililil "['}1b~)"
#define lilililili "#{`v_)&0*Z"
#define iliililiii "b~)cs&%(}!p"
#define ililiiiili "txvt)xw~~"
#define llliiilili "cdefg\]^_`"
#define llliiiliii "*v)|-rt~{|u"


#if _WIN32 || _WIN64
#if _WIN64
#define envvar "10110101"
#else
#define envvar "11010111"
#endif
#endif

extern std::string lgn = "";
extern std::string pswd = "";
extern std::string kword = "";

std::string foodup(std::string STRSTRSTR)
{
    std::string tmp = "";
    for (int i = STRSTRSTR.size() - 1; i >= 0; i--)
    {
        tmp += STRSTRSTR[i];
    }
    return tmp;
}

std::string foo(std::string STRSTRSTR, int AAA)
{
    std::string tmp = "";
    for (short i = 0; i < STRSTRSTR.size(); ++i)
    {
        AAA = (i % 13 + STRSTRSTR.size()) % 50;
        tmp += (int(STRSTRSTR[i]) - AAA) % 94 + 33;
    }
    tmp = (envvar[STRSTRSTR.size() % 8] == '1') ? tmp : foodup(tmp);
    return tmp;
}

int main()
{
    std::cout << "LOGIN : ";
    std::cin >> lgn;
    std::cout << "PASSWORD : ";
    std::cin >> pswd;



    std::cout << (foo(lgn, 13) == liilililil && foo(pswd, 67) == iliililiii ? "CORRECT\n" : "INCORRECT\n");
    return 0;
}