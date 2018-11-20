#ifndef DOXTESTLISTENER_H
#define DOXTESTLISTENER_H

#include <igloo/igloo.h>
#include <algorithm>
#include <string>

namespace igloo {

class DoxTestListener : public TestListener
{
public:
    virtual ~DoxTestListener() {};
    void TestRunStarting() override {}
    void TestRunEnded(const TestResults&) override
    {
        std::cout << std::endl;
    }

    void ContextRunStarting(const ContextBase& context) override
    {
        auto context_name = context.Name();
        std::replace(context_name.begin(), context_name.end(), '_', ' ');
        std::cout << context_name << ":"<< std::endl;
    }

    void ContextRunEnded(const ContextBase& ) override
    {
        std::cout << std::endl;
    }

    void SpecRunStarting(const ContextBase& , const std::string& specName) override
    {
        auto spec_name = specName;
        std::replace(spec_name.begin(), spec_name.end(), '_', ' ');
        std::cout << "  - " << spec_name;
    }

    void SpecSucceeded(const ContextBase& , const std::string& ) override
    {
        std::cout << "\t\t Passed" << std::endl;
    }

    void SpecFailed(const ContextBase& , const std::string& ) override
    {
        std::cout <<  "\t\t FAILED" << std::endl;
    }
};

}
#endif
