//#include "hospital.h"
//#include "person.h"
#include "hospital.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <QUuid>
#include <SQLiteCpp/SQLiteCpp.h>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    Hospital hosp = Hospital();
    hosp.addPatient();
    std::cout << "";
/*QCoreApplication a(argc, argv);
    // Using SQLITE_VERSION would require #include <sqlite3.h> which we want to avoid: use SQLite::VERSION if possible.
    //  std::cout << "SQlite3 version " << SQLITE_VERSION << std::endl;
    std::cout << "SQlite3 version " << SQLite::VERSION << " (" << SQLite::getLibVersion() << ")" << std::endl;
    std::cout << "SQliteC++ version " << SQLITECPP_VERSION << std::endl;
    // Open a database file
    SQLite::Database db("transaction.db3", SQLite::OPEN_READWRITE|SQLite::OPEN_CREATE);
    SQLite::Transaction transaction(db);
    db.exec("CREATE TABLE test (id INTEGER PRIMARY KEY, value TEXT)");
    int nb = db.exec("INSERT INTO test VALUES (NULL, \"test\")");
    std::cout << "INSERT INTO test VALUES (NULL, \"test\")\", returned " << nb << std::endl;
    db.exec("INSERT INTO test VALUES (4, \"blabla\")");

    // Commit transaction
    transaction.commit();

    return a.exec();

    QDate d1(2000,07,9);
    QUuid ID = QUuid::createUuid();
    ID.toString();
    Person newPerson(ID,"Dolev",Male,d1,24,"Pardes Hanna",525421700);
    cout << newPerson; */
}
