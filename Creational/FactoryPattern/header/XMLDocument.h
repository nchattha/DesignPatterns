/* Concrete derived class defined */
#include <exception>
#include "DocumentFramework.h"

class XMLDocument: public DocumentFramework // @suppress("Class has a virtual method and non-virtual destructor")
{
    private:
    std::fstream m_fFileName;
    public: 
    XMLDocument(std::string fileName);
    bool openFile(std::string pFileName);
    bool closeFile(std::string pFileName);
    //Do respective operations for IMAGE Content reading
    void readFileData();
    //Do respective operation to update the IMAGE Content 
    void writeFileData();
};
