//
// Created by XFC on 2018/3/7.
//

#ifndef MYLIBRTMP_TCPNETWORKHELPER_H
#define MYLIBRTMP_TCPNETWORKHELPER_H

#include "NetworkHelper.h"
class TcpNetworkHelper :public NetworkHelper{
public:
    TcpNetworkHelper();
    ~TcpNetworkHelper() override ;
    bool init() override;
    void cleanup()override;
    bool connect(const std::string &hostName, int port) override;
    bool setTimeout(int32_t timeOut) override;

    std::string getLastError() override;

    int32_t readN() override;
    int32_t writeN() override;

private:
    int fd;

};


#endif //MYLIBRTMP_TCPNETWORKHELPER_H
