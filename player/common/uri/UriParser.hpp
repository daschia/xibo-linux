#pragma once

#include <string>
#include <regex>
#include <boost/optional/optional.hpp>

#include "Uri.hpp"

class UriParser
{
public:
    static Uri parse(const std::string& rawUri);
    static Uri::Scheme getScheme(const std::string& scheme);
    static Uri::Authority::HostType getHostType(const std::string& host);

private:
    static boost::optional<std::string> getUserInfo(const std::string& userinfo);
    static boost::optional<unsigned short> getPortNumber(const std::string& port);

    static std::smatch parseInternal(const std::string& rawUri);

};
