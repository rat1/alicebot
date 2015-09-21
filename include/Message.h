#ifndef __ALICE_BOT_MESSAGE_H__
#define __ALICE_BOT_MESSAGE_H__

#include <string>
#include <jsoncpp/json/json.h>
#include "User.h"

namespace bot {

class Message {
public:
    Message();
    Message(const Json::Value& message);

    int getId() const;
    User getFrom() const;
    const std::string& getText() const;

    const time_t& getDate() const;
private:
    int messageId;
    User from;
    std::string text;
    time_t date;
};

}

#endif //__ALICE_BOT_MESSAGE_H__
