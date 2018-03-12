//
// Created by XFC on 2018/3/7.
//

#ifndef MYLIBRTMP_NETWORKHELPER_H
#define MYLIBRTMP_NETWORKHELPER_H

#include <stdint.h>
#include <string>

class NetworkHelper {
public:
    NetworkHelper() = default;
    virtual ~NetworkHelper()= default;
    virtual bool init() = 0;
    virtual void cleanup() = 0;
    virtual bool connect(const std::string &hostName, int port) = 0;
    virtual bool setTimeout(int32_t timeOut) = 0;
    virtual int32_t readN() = 0;
    virtual int32_t writeN() = 0;
    virtual std::string getLastError() = 0;
};


#endif //MYLIBRTMP_NETWORKHELPER_H
