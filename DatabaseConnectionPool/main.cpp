#include <iostream>
#include <cppconn/statement.h>

#include "ConnectionPool.h"

int main(int argc, char *argv[])
{
    ContionPool contionPool("root", "", "127.0.0.1", 3, 2);

    std::shared_ptr<sql::Connection> connection = contionPool.getConnect("Student");

    std::shared_ptr<sql::Statement> statement(connection->createStatement(),
                                              [](sql::Statement *s) {delete(s);});

    sql::ResultSet *result = statement->executeQuery("SELECT * FROM Info;");

    while (result->next()) {
        std::cout << result->getString(1) << "\t";
        std::cout << result->getString(2) << "\t";
        std::cout << result->getInt(3) << "\t";
        std::cout << result->getInt(4) << "\t";
        std::cout << result->getInt(5) << "\t";
        std::cout << result->getDouble(6) << std::endl;
    }

    sleep(10);
    contionPool.returnConnect(connection);
    while (1) {
        sleep(1);
    }

    return 0;
}