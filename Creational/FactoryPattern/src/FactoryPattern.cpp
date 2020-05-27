//Test the factory pattern
#include "../header/IMAGEDocument.h"
#include "../header/XMLDocument.h"
#include <iostream>
#include <vector>
using namespace std;

DocumentFramework* DocumentFramework::createDocument(DocumentType pDocumentType,string fileName)
{
    switch(pDocumentType)
    {
        case XML:   return new XMLDocument(fileName);
        case IMAGE: return new IMAGEDocument(fileName);
        case EXCEL:
        case WORD: cout<<"Implementation is in progress"<<endl;
            break;
    }
    return NULL;
}

int main(void)
{
    vector<DocumentFramework*>docList;

    DocumentFramework *data = DocumentFramework::createDocument(XML,"data.xml");
    docList.push_back(data);
    data = (DocumentFramework::createDocument(IMAGE,"data.jpg"));
    docList.push_back(data);
//
//    for(auto data:docList)
//    {
//        cout<<"Name: "<<data->getFileName()<<endl;
//    }

    return 0;
}
