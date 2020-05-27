/* Concrete derived class defined */
#include "../header/IMAGEDocument.h"
using namespace std;
IMAGEDocument::IMAGEDocument(string fileName) : DocumentFramework(fileName)
{
    cout << "IMAGEDocument object been created" << endl;
}
bool IMAGEDocument::openFile(string pFileName)
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
            cout << getFileName() << " IMAGE file is already opened" << endl;
        }
    }
    catch (exception &exp)
    {
        cout << "ERROR:" << exp.what() << endl;
        return false;
    }
    return true;
}
bool IMAGEDocument::closeFile(string pFileName)
{
    if (!m_fFileName.is_open())
    {
        m_fFileName.close();
        cout << getFileName() << " IMAGE file is closed" << endl;
        return true;
    }
    return false;
}
//Do respective operations for IMAGE Content reading
void IMAGEDocument::readFileData()
{
    //code to read data
}
//Do respective operation to update the IMAGE content
void IMAGEDocument::writeFileData()
{
    //code to read data
}
