#ifndef __BOT_API_REQUEST_H__
#define __BOT_API_REQUEST_H__

#include <string>
#include <curl/curl.h>

namespace bot {

namespace api {

class Request {
public:
    Request() = delete;
    Request(const std::string& token);
    Request(const Request& other);
    virtual ~Request();

    virtual std::string perform(const std::string& method, const std::string& data = std::string());
    virtual std::string downloadFile(const std::string& path);

    const std::string& getToken() const;

    Request& operator=(const Request& other);

    std::string urlencode(const std::string& text);
private:
    std::string performUrl(const std::string& url, const std::string& data = std::string());
protected:
    CURL *curl;
private:
    std::string token;
};

}

}

#endif //__BOT_API_REQUEST_H__
