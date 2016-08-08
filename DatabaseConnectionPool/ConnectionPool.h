//
// Created by zhanggen on 16-8-6.
//

#ifndef DATABASECONNECTIONPOOL_CONNECTIONPOOL_H
#define DATABASECONNECTIONPOOL_CONNECTIONPOOL_H

#include <mysql_driver.h>

class ContionPool {

public:

    //构造函数
    ContionPool(const std::string user, const std::string passwd, const std::string host,
                const unsigned int size, unsigned int step);
    std::shared_ptr<sql::Connection> getConnect(std::string database);  //从连接池获得一个连接
    void returnConnect(std::shared_ptr<sql::Connection> con);           //归还一个连接进连接池

private:
    void initPool(const unsigned int size);

private:
    sql::mysql::MySQL_Driver *driver;           //mysql驱动
    std::string user;                           //用户
    std::string passwd;                         //密码
    std::string host;                           //数据库地址
    std::list<std::shared_ptr<sql::Connection>> listConnect;     //所有未使用的数据库连接

    unsigned int step;                          //连接池中连接不够时每次请求分配的大小
    unsigned int poolSize;                      //连接池大小
};

#endif //DATABASECONNECTIONPOOL_CONNECTIONPOOL_H
