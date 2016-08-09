//
// Created by zhanggen on 16-8-6.
// 使用connecter连接数据库练习
//

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/metadata.h>

int main(int argc, char *argv[])
{
    sql::mysql::MySQL_Driver *driver = sql::mysql::get_driver_instance();    //创建mysql驱动

    std::shared_ptr<sql::Connection> connect(driver->connect("127.0.0.1", "root", ""),
                                             [](sql::Connection *con){delete(con);});     //建立一个连接
    connect->setSchema("Student");      //选择一个数据库
    std::shared_ptr<sql::Statement> statement(connect->createStatement(),
                                              [](sql::Statement *statement) {delete(statement);});  //创建一个语句对象

    sql::ResultSet* result = statement->executeQuery("SELECT * FROM Info");

    while (result->next()) {
            std::cout << result->getString(1) << "  " << result->getString(2)
                      << "  " << result->getInt(3) << "  " << result->getInt(4) << "  " << result->getInt(5)
                      << "  " << result->getInt(6) << "  " <<  result->getDouble(7) << std::endl;
    }

    return 0;
}
