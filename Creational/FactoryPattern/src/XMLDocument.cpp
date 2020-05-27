/* Concrete derived class defined */
#include "../header/XMLDocument.h"
using namespace std;
XMLDocument::XMLDocument(string fileName)
    :DocumentFramework(fileName)
{
    cout << "XMLDocument object been created" << endl;
}

bool XMLDocument::openFile(string pFileName)
{
    //do file operations
    try
    {
        if (!m_fFileName.is_open())
        {
            m_fFileName.open(pFileName, ios::out | ios::in | ios::trunc | ios::ate);
        }
        else
        {
            cout << getFileName() << " XML file is already opened" << endl;
        }
    }
    catch (exception &exp)
    {
        cout << "ERROR:" << exp.what() << endl;
        return false;
    }
    return true;
}
bool XMLDocument::closeFile(string pFileName)
{
    if (!m_fFileName.is_open())
    {
        m_fFileName.close();
        cout << getFileName() << " XML file is closed" << endl;
        return true;
    }
    return false;
}
//Do respective operations for XML Content reading
void XMLDocument::readFileData()
{
    //code to read data
}
//Do respective operation to update the XML Content
void XMLDocument::writeFileData()
{
    //code to read data
}
