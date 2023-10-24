#pragma once
#include "User.h"
#include <vector>
#include <map>

class Chat {
private:
    std::vector<User> users;
    std::map<std::string, std::string> messages;

public:
    void registerUser(const std::string& login, const std::string& password, const std::string& name);
    bool loginUser(const std::string& login, const std::string& password);
    void sendMessage(const std::string& from, const std::string& to, const std::string& message);
    std::string readMessages(const std::string& user);
};