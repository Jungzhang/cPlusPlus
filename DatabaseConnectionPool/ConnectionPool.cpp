//
// Created by zhanggen on 16-8-8.
// 数据库连接池
//

#include "ConnectionPool.h"

void ContionPool::initPool(const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        std::shared_ptr<sql::Connection> connect (driver->connect(host, user, passwd),
                                                  [](sql::Connection *connection)
                                                  {delete(connection);});
        listConnect.push_back(std::move(connect));    //加入连接池
    }
}

//构造函数
ContionPool::ContionPool(const std::string user, const std::string passwd, const std::string host,
                         const unsigned int size, unsigned int step)
        : user(user), passwd(passwd), host(host), poolSize(size), step(step)
{
    driver = sql::mysql::get_driver_instance();
    initPool(size);
}

//获取连接
std::shared_ptr<sql::Connection> ContionPool::getConnect(std::string database)
{
    //连接池为空,没有考虑MySQL的最大连接数量
    if (listConnect.empty()) {
        initPool(step);
    }

    auto tmp = listConnect.front();
    listConnect.pop_front();
    tmp->setSchema(database);   //使用数据库database
    return tmp;
}

//归还连接
void ContionPool::returnConnect(std::shared_ptr<sql::Connection> con)
{
    listConnect.push_back(con);
}