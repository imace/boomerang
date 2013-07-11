#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include "util.h"
#include "type.h"

#include "BinaryFile.h"
#include "frontend.h"
#include "cfg.h"

// Don't #include sparcfrontend.h; it's presently in ../frontend and it would
// mean that any file #including this file would need -I../frontend
class SparcFrontEnd;
class Prog;

class AnalysisTest : public CppUnit::TestCase
{
    // the frontend
    FrontEnd *pFE;
    // the program
    Prog *prog;

public:
    AnalysisTest(std::string name) : CppUnit::TestCase (name)
    {}

    virtual void registerTests(CppUnit::TestSuite* suite);

    int countTestCases () const;

    void setUp ();
    void tearDown ();

    void testFlags ();
};
