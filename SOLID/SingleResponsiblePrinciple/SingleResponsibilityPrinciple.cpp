/*
 *
Single Responsibility:
each class has only one responsibility, and therefore has only one reason to
change. Journal would need to change only if there’s something more
that needs to be done with respect to storage of entries—for example,
you might want each entry prefixed by a timestamp, so you would
change the add() function to do exactly that. On the other hand, if you
wanted to change the persistence mechanic, this would be changed in
PersistenceManager.
 */

#include <iostream>

using namespace std;

struct Journal {
    string title;
    vector <string> entries;

    explicit Journal(const string &title) : title{title} {}

    void add(const string &entry);
};

void Journal::add(const string &entry) {
    static int count = 1;
    entries.push_back(boost::lexical_cast<string>(count++)
                      + ": " + entry);
}

//void Journal::save(const string& filename)
//{
// ofstream ofs(filename);
// for (auto& s : entries)
// ofs << s << endl;
//}
//This approach is problematic. The journal’s responsibility is to keep
//journal entries, not to write them to disk. If you add the disk-writing
//functionality to Journal and similar classes, any change in the approach
//to persistence (say, you decide to write to the cloud instead of disk) would
//require lots of tiny changes in each of the affected classes.

//An architecture that leads
//you to having to do lots of tiny changes in lost of classes, whether related
//(as in a hierarchy) or not, is typically a code smell—an indication that
//something’s not quite right. Now, it really depends on the situation

struct PersistenceManager {
    static void save(const Journal &j, const string &filename) {
        ofstream ofs(filename);
        for (auto &s : j.entries)
            ofs << s << endl;
    }
};


//An extreme example of an antipattern that violates the SRP is called
//a God Object. A God Object is a huge class that tries to handle as many
//concerns as possible, becoming a monolithic monstrosity that is very difficult to work with.

//Luckily for us, God Objects are easy to recognize and thanks to
//source control systems

int main()
{
    Journal j{"Dear Diary"};
    j.add("I cried today");
    j.add("I ate a bug");
}