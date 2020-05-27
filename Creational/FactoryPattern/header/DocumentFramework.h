#ifndef DOCUMENT_H
#define DOCUMENT_H
/* Abstract base class declared by framework */
#include<iostream>
#include<fstream>
#include<string>

enum DocumentType{
    XML,
    IMAGE,
    EXCEL,
    WORD
};

class DocumentFramework // @suppress("Class has a virtual method and non-virtual destructor")
{
    private: 
    std::string fileName;
    
    public:
    //Constructor for framework
    DocumentFramework(std::string pName):fileName(pName){}
    virtual bool openFile(std::string pFileName);
    virtual bool closeFile(std::string pFileName);
    virtual void readFileData(void);
    virtual void writeFileData(void);
    std::string getFileName(){return fileName;}
    // Factory Method
    static DocumentFramework *createDocument(DocumentType pDocumentType, std::string pFileName);
};
#endif
